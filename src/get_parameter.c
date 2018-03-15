/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_parameter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 12:29:24 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/15 14:28:27 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				get_result(const char *src, int *const flags,
		const int *const ref)
{
	if (*++src == '-' || !*src)
		return (1);
	while (*src)
		*flags |= ref[(unsigned int)*src++];
	return (0);
}

int						get_parameter(int *const argc, void **const volatile argv,
		const int *const ref)
{
	int		flags;
	char	**cargv;
	int		cargc;

	flags = 0;
	cargv = *argv;
	cargc = *argc;
	while (*cargv)
	{
		if (**cargv == '-')
		{
			if (get_result(*cargv, &flags, ref) && ++cargv && cargc--)
				break ;
			cargc--;
		}
		else
			break ;
		cargv++;
	}
	*argv = cargv;
	*argc = cargc;
	return (flags);
}
