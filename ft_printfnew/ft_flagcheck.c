/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flagcheck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:08:17 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/06 22:35:57 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flagcheck(const char s, va_list args)
{
	if (s == 'd' || s == 'i')
		return (ft_putnbr_base(va_arg(args, int), "0123456789", 10));
	if (s == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (s == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (s == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789", 10));
	if (s == 'x')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789abcdef", 16));
	if (s == 'X')
		return (ft_puthex(va_arg (args, unsigned int), "0123456789ABCDEF", 16));
	if (s == 'p')
		return (ft_putpointer(va_arg(args, unsigned long long)));
	if (s == '%')
		return (ft_putchar('%'));
	return (0);
}
