/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashable_append.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:52:49 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/05 13:35:31 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					hashable_append(t_hashable *const hash,
		const char *key, void *const element)
{
	const size_t		keyvalue = hashable_key(key);
	t_hashable_packet	*pos;

	pos = hash->packets + (keyvalue % hash->size);
	while (1)
	{
		if (!pos->src)
			break ;
		else
		{
			if (!ft_strcmp(pos->src, key))
				return ((void)(pos->element = element));
			if (pos->next)
				pos = pos->next;
			else
			{
				pos->next = malloc(sizeof(t_hashable_packet));
				pos = pos->next;
				pos->src = NULL;
			}
		}
	}
	pos->src = ft_strdup(key);
	pos->element = element;
	pos->next = NULL;
}
