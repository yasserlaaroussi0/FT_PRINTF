/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:55:36 by ylaarous          #+#    #+#             */
/*   Updated: 2021/12/28 14:19:17 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert(const char *format, int *cp, void *str)
{
	if (*format == 'c')
		ft_putchar((char)str, cp);
	if (*format == 's')
		ft_putstr((char *)str, cp);
	if (*format == 'p')
		ft_putp((unsigned long)str, cp);
	if (*format == 'd' || *format == 'i')
		ft_putnbr((int)str, cp);
	if (*format == 'u')
		ft_ud((unsigned int)str, cp);
	if (*format == 'x')
		ft_hex_x((unsigned int)str, cp);
	if (*format == 'X')
		ft_hex_up((unsigned int)str, cp);
}
