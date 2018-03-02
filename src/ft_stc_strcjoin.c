/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stc_strcjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 15:08:55 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/02 15:10:20 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_stc_strcjoin(const char *s1, const char *s2, const char c)
{
	static char		buffer[FT_STRJOIN_BUFFER];
	char			*new;

	new = buffer;
	while (*s1)
		*new++ = *s1++;
	*new++ = c;
	while (*s2)
		*new++ = *s2++;
	*new = 0;
	return (buffer);
}
