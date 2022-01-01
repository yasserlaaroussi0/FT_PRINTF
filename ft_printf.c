/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:56:10 by ylaarous          #+#    #+#             */
/*   Updated: 2021/12/28 14:16:21 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		cp;
	va_list	args;

	va_start(args, str);
	cp = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '\0')
			break ;
		else if (str[i] == '%')
		{
			i++;
			if (str[i] != '%')
				ft_convert(&str[i], &cp, va_arg(args, void *));
			else if (str[i] == '%')
				ft_putchar('%', &cp);
		}
		else
			ft_putchar(str[i], &cp);
		i++;
	}
	return (cp);
}
