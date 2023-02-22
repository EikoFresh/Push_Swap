/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:52:38 by vziegler          #+#    #+#             */
/*   Updated: 2023/02/22 01:41:56 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_lst **s)
{
	int	tmp_nbr;

	tmp_nbr = (*s)->next->nbr;
	(*s)->next->nbr = (*s)->nbr;
	(*s)->nbr = tmp_nbr;
	ft_printf("\033[32msb\033[0m\n");
}
