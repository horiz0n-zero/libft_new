/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 13:24:56 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/06 15:13:17 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline size_t			ft_while_strlen(
		const unsigned long int *longworld_ptr,
		const unsigned long int himagic,
		const unsigned long int lomagic,
		const char *const src)
{
	const char					*char_ptr;
	unsigned long int			longworld;
	int							i;

	while (1)
	{
		longworld = *longworld_ptr++;
		if ((longworld - lomagic) & ~longworld & himagic)
		{
			char_ptr = (const char*)(longworld_ptr - 1);
			i = 0;
			while (i < 8)
			{
				if (!char_ptr[i])
					return ((size_t)(char_ptr - src + i));
				i++;
			}
		}
	}
}

size_t							ft_strlen(const char *const src)
{
	const char					*char_ptr;
	const unsigned long int		*longworld_ptr;
	unsigned long int			himagic;
	unsigned long int			lomagic;

	char_ptr = src;
	while (((unsigned long int)char_ptr) & (sizeof(unsigned long int) - 1))
	{
		if (!*char_ptr)
			return ((size_t)(char_ptr - src));
		else
			char_ptr++;
	}
	longworld_ptr = (const void*)char_ptr;
	himagic = FT_STRLEN_HIMAGIC;
	lomagic = FT_STRLEN_LOMAGIC;
	if (sizeof(unsigned long int) > 4)
	{
		himagic = ((himagic << 16) << 16) | himagic;
		lomagic = ((lomagic << 16) << 16) | lomagic;
	}
	return (ft_while_strlen(longworld_ptr, himagic, lomagic, src));
}
