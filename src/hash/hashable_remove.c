/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashable_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 13:33:38 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/05 14:45:48 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*hashable_remove(t_hashable *const hash,
		const char *key)
{
	const size_t		keyvalue = hashable_key(key);
	t_hashable_packet	*pos;

	pos = hash->packets + (keyvalue % hash->size);
	write(STDERR_FILENO, "todo\n", 5);
	return (NULL);
}
