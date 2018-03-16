/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 13:25:22 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/16 15:00:44 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "definition.h"
# include "hashable.h"

size_t					ft_strlen(const char *const src);
# define FT_STRLEN_HIMAGIC 0x80808080L
# define FT_STRLEN_LOMAGIC 0x01010101L

char					*ft_strdup(const char *src);
char					*ft_strndup(const char *const src, const size_t len);
char					*ft_strjoin(const char *s1, const char *s2);
char					*ft_strcjoin(const char *s1, const char *s2,
		const char c);
char					*ft_strjoins(int count, ...);
# define FT_STRJOIN_BUFFER 1024

char					*ft_stc_strjoin(const char *s1, const char *s2);
char					*ft_stc_strcjoin(const char *s1, const char *s2,
		const char c);
char					*ft_stc_strjoins(int count, ...);
void					char_memset(char *ptr, const char set, size_t len);
void					short_memset(short *ptr, const short set, size_t len);
void					int_memset(int *ptr, const int set, size_t len);
void					long_memset(long *ptr, const long set, size_t len);
void					pointer_memset(void **ptr, void *const set, size_t len);
void					ft_memfrob(char *ptr, size_t len);
int						ft_strcmp(register const char *s1, register const char *s2);
int						get_parameter(int *const argc, void **const volatile argv, const int *const ref); // ref[256]
void					*ft_memchr(const void *const src, const unsigned char c, size_t size);
# define MAGIC_BITS ((unsigned long int)0x7efefefe << 32 | 0xfefefeff)

#endif
