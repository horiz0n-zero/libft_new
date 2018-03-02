/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 14:44:37 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/02 14:46:33 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strcjoin(const char *s1, const char *s2, const char c)
{
	const size_t	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	char			*new;

	if (!(new = malloc(len + 1)))
		return (NULL);
	while (*s1)
		*new++ = *s1++;
	*new++ = c;
	while (*s2)
		*new++ = *s2++;
	*new = 0;
	return (new - len);
}
