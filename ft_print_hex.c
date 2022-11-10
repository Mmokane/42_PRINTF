/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:48:42 by mmokane           #+#    #+#             */
/*   Updated: 2022/11/09 12:51:59 by mmokane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned int n, char c, int *count)
{
	char	*base;

	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (n < 16)
		ft_putchar(base[n % 16], count);
	else
	{
		ft_print_hex(n / 16, c, count);
		ft_print_hex(n % 16, c, count);
	}
}
