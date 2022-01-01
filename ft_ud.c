/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ud.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:57:21 by ylaarous          #+#    #+#             */
/*   Updated: 2021/12/28 13:57:23 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	ft_ud(unsigned int	nb, int *cp)
{
	long	nbr;

	nbr = nb;
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, cp);
		ft_putnbr(nbr % 10, cp);
	}
	else
		ft_putchar(nb + 48, cp);
}
