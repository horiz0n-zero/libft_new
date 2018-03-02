/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 14:46:39 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/02 14:53:48 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strjoins_len(int count, va_list args)
{
	size_t		len;

	len = 0;
	while (count--)
		len += ft_strlen(va_arg(args, char*));
	return (len);
}

char			*ft_strjoins(int count, ...)
{
	va_list		args;
	size_t		len;
	char		*new;
	char		*target;

	va_start(args, count);
	len = strjoins_len(count, args);
	if (!(new = malloc(len + 1)))
		return (NULL);
	while (count--)
	{
		target = va_arg(args, char*);
		while (*target)
			*new++ = *target++;
	}
	va_end(args);
	*new = 0;
	return (new - len);
}
