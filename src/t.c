/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 14:47:54 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/15 15:08:21 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <block.h>
#include <unistd.h>
#define BLOCK ^
#define SBLOCK {
#define EBLOCK }
#define DOBLOCK(...) ^ {__VA_ARGS__ ; }

void							ft_twice(void (BLOCK ptr)(void))
{
	ptr();
	ptr();
}

int								main(void)
{
	void						*ptr;

	ptr = DOBLOCK(write(1, "oh!", 3));
	ft_twice(ptr);
	return (0);
}
