/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   definition.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 15:30:57 by afeuerst          #+#    #+#             */
/*   Updated: 2018/03/06 15:13:02 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINITION_H
# define DEFINITION_H

# define AS(ptr, type) ((type*)ptr)
# define IS(raw, type) ((type)raw)
# define ALLOCA(size) __builtin_alloca(size)
# define ASINLINE __attribute__((always_inline)) inline

#endif
