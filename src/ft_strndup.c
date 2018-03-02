/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 14:37:29 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/02 14:41:21 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strndup(const char *const src, const size_t len)
{
	char		*new;
	size_t		i;

	i = 0;
	if (!(new = malloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
