/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:15:48 by mmokane           #+#    #+#             */
/*   Updated: 2022/11/09 13:16:59 by mmokane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putstr(char *s, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putchar(char s, int *count);
void	ft_print_uns(unsigned int nb, int *count);
void	ft_print_hex(unsigned int nb, char c, int *count);
void	ft_print_add(unsigned long nb, int *count);
int		ft_printf(const char *sr, ...);

#endif
