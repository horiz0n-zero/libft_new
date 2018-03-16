/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 14:01:23 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/16 15:01:06 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void						*ft_memchr(const void *const src,
		const unsigned char c, size_t size)
{
	const unsigned char		*char_ptr;
	const unsigned long int	*long_ptr;
	unsigned long int		charmask;
	unsigned long int		world;

	char_ptr = src;
	while (size && (unsigned long int)char_ptr & (sizeof(unsigned long int) - 1))
	{
		if (*char_ptr == c)
			return ((void*)char_ptr);
		char_ptr++;
		size--;
	}
	long_ptr = (const void*)char_ptr;
	charmask = c | (c << 8);
	charmask |= charmask << 16;
	if (sizeof(long int) > 4)
		charmask |= charmask << 32;
	while (size >= sizeof(world))
	{
		world = *long_ptr++ ^ charmask;
		if (((world + MAGIC_BITS) ^ ~world) & ~MAGIC_BITS)
		{
			char_ptr = ((unsigned char*)long_ptr) - 1;
			if (*char_ptr == c)
				return ((void*)char_ptr);
			if (char_ptr[1] == c)
				return ((void*)char_ptr + 1);
			if (char_ptr[2] == c)
				return ((void*)char_ptr + 2);
			if (char_ptr[3] == c)
				return ((void*)char_ptr + 3);
			if (sizeof(long int) > 4)
			{
				if (char_ptr[4] == c)
					return ((void*)char_ptr + 4);
				if (char_ptr[5] == c)
					return ((void*)char_ptr + 5);
				if (char_ptr[6] == c)
					return ((void*)char_ptr + 6);
				if (char_ptr[7] == c)
					return ((void*)char_ptr + 7);
			}
		}
		size -= sizeof(world);
	}
	char_ptr = (void*)long_ptr;
	while (size--)
	{
		if (*char_ptr == c)
			return ((void*)char_ptr);
		else
			char_ptr++;
	}
	return (NULL);
}
