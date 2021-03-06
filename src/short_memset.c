/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_memset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 15:24:10 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/02 15:24:45 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		short_memset(short *ptr, const short set, size_t len)
{
	while (len--)
		*ptr++ = set;
}
