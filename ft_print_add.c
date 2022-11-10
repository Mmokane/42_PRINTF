/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:46:39 by mmokane           #+#    #+#             */
/*   Updated: 2022/11/09 15:08:50 by mmokane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_add(unsigned long nb, int *count)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nb < 16)
	{
		ft_putchar(hexa[nb % 16], count);
	}
	else
	{
		ft_print_add(nb / 16, count);
		ft_print_add(nb % 16, count);
	}
}
