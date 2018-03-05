/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashable_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:48:07 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/05 12:50:40 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				hashable_init(t_hashable *const hash, const size_t size)
{
	const size_t	count = sizeof(t_hashable_packet) * size;

	hash->packets = malloc(count);
	hash->size = size;
	pointer_memset((void*)hash->packets, NULL, 3 * size);
}
