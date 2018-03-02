/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 14:34:02 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/02 14:37:16 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strdup(const char *src)
{
	const size_t	len = ft_strlen(src);
	char			*new;

	if (!(new = malloc(len + 1)))
		return (NULL);
	while (*src)
		*new++ = *src++;
	*new = 0;
	return (new - len);
}
