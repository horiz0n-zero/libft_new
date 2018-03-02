/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 13:25:22 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/02 15:14:08 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

size_t					ft_strlen(const char *const src);
# define FT_STRLEN_HIMAGIC 0x80808080L
# define FT_STRLEN_LOMAGIC 0x01010101L
char					*ft_strdup(const char *src);
char					*ft_strndup(const char *const src, const size_t len);
char					*ft_strjoin(const char *s1, const char *s2);
char					*ft_strcjoin(const char *s1, const char *s2, const char c);
char					*ft_strjoins(int count, ...);
# define FT_STRJOIN_BUFFER 1024
char					*ft_stc_strjoin(const char *s1, const char *s2);
char					*ft_stc_strcjoin(const char *s1, const char *s2, const char c);
char					*ft_stc_strjoins(int count, ...);

#endif
