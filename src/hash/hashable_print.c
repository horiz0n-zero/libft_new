/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashable_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:55:43 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/05 15:55:26 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void								hashable_print(t_hashable *const hash)
{
	t_hashable_packet				*pos;
	t_hashable_packet				*ptr;
	size_t							i;

	i = 0;
	pos = hash->packets;
	while (i < hash->size)
	{
		ptr = pos++;
		if (ptr->src)
		{
			printf("%p", ptr->src);
			ptr = ptr->next;
			while (ptr)
			{
				printf(" -> %p", ptr->src);
				ptr = ptr->next;
			}
			printf("\n");
		}
		else
			printf("nil\n");
		i++;
	}
}
