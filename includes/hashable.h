/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashable.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:40:36 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/05 15:19:22 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHBALE_H
# define HASHBALE_H

#include <unistd.h>
#include <stdlib.h>

typedef struct			s_hashable_packet
{
	char				*src;
	void				*element;
	void				*next;
}						t_hashable_packet;

typedef struct			s_hashable
{
	size_t				size;
	t_hashable_packet	*packets;
}						t_hashable;

void					hashable_init(t_hashable *const hash, const size_t size);
void					hashable_deinit(t_hashable *const hash);
void					hashable_append(t_hashable *const hash, const char *key, void *const element);
void					*hashable_get(t_hashable *const hash, const char *key);
void					*hashable_remove(t_hashable *const hash, const char *key);
size_t					hashable_key(const char *key);
void					hashable_print(t_hashable *const hash);

#endif
