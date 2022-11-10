/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:52:13 by mmokane           #+#    #+#             */
/*   Updated: 2022/11/09 12:56:57 by mmokane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_uns(unsigned int nb, int *count)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, count);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48, count);
	}
}
