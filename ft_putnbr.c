/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokane <mmokane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:01:55 by mmokane           #+#    #+#             */
/*   Updated: 2022/11/09 15:11:04 by mmokane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *count)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648", count);
	else if (nb < 0)
	{
		ft_putchar('-', count);
		ft_putnbr(nb * -1, count);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10, count);
		ft_putnbr(nb % 10, count);
	}
	else if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48, count);
}
