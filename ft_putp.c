/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:56:55 by ylaarous          #+#    #+#             */
/*   Updated: 2021/12/28 13:57:29 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_hexlon(unsigned long n, int *cp)
{
    char *hex;
    hex = "0123456789abcdef";
    if(n < 16)
        *cp += write(1, &hex[n],1);
    else
    {
        ft_hexlon(n / 16, cp);
        ft_hexlon(n % 16, cp);
    }
}

void    ft_putp(unsigned long a, int *cp)
{
    write(1,"0x", 2);
    *cp += 2;
    ft_hexlon(a, cp);
}
