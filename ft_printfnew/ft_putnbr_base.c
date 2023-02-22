/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:29:22 by estruckm          #+#    #+#             */
/*   Updated: 2023/01/06 22:48:55 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long int n, const char *base, int nbr_base)
{
	int	i;

	i = 0;
	if (n == LLONG_MIN)
	{
		write(1, "-9223372036854775807", 20);
		return (20);
	}
	if (n < 0)
	{
		i++;
		n = n * (-1);
		write (1, "-", 1);
	}
	if (n >= nbr_base)
	{
		ft_putnbr_base(n / nbr_base, base, nbr_base);
	}
	i += ft_numlen_base(n, nbr_base);
	write(1, &base[n % nbr_base], 1);
	return (i);
}
