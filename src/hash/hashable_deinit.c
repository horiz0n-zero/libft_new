/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashable_deinit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:51:55 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/05 14:44:44 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					hashable_deinit(t_hashable *const hash)
{
	t_hashable_packet	*ptr;
	void				*tmp;
	size_t				i;

	i = 0;
	if (hash->packets)
	{
		while (i < hash->size)
		{
			ptr = hash->packets + i++;
			if (ptr->src)
			{
				free(ptr->src);
				ptr = ptr->next;
				while (ptr)
				{
					free(ptr->src);
					// element ?
					tmp = ptr;
					ptr = ptr->next;
					free(tmp);
				}
			}
		}
		free(hash->packets);
	}
}
