/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:56:20 by ylaarous          #+#    #+#             */
/*   Updated: 2021/12/28 14:19:44 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

int    ft_printf(const char *s, ...);
void    ft_putchar(char c, int *cp);
void	ft_putnbr(int   nb, int *cp);
void    ft_putstr(char *str, int *cp);
void	ft_ud(unsigned int  nb, int *cp);
void    ft_hex_x(unsigned int n, int *cp);
void    ft_hex_up(unsigned int n, int *cp);
void    ft_convert(const char *format, int *cp, void *str);
void    ft_putp(unsigned long a, int *cp);



#endif
