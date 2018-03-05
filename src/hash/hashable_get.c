/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashable_get.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 13:29:08 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/05 13:36:08 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*hashable_get(t_hashable *const hash, const char *key)
{
	const size_t		keyvalue = hashable_key(key);
	t_hashable_packet	*pos;

	pos = hash->packets + (keyvalue % hash->size);
	while (1)
	{
		if (!pos || !pos->src)
			break ;
		else if (pos->src && !ft_strcmp(pos->src, key))
			return (pos->element);
		else
			pos = pos->next;
	}
	return (NULL);
}
