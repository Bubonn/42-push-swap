/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:14:37 by jdubilla          #+#    #+#             */
/*   Updated: 2022/01/09 17:52:07 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <unistd.h>

void	ft_swap_a(int *tab_a, int *len_a)
{
	int	tmp;

	if (*len_a > 1)
	{
		tmp = tab_a[0];
		tab_a[0] = tab_a[1];
		tab_a[1] = tmp;
		write(1, "sa\n", 3);
	}
}

void	ft_swap_b(int *tab_b, int *len_b)
{
	int	tmp;

	if (*len_b > 1)
	{
		tmp = tab_b[0];
		tab_b[0] = tab_b[1];
		tab_b[1] = tmp;
		write(1, "sb\n", 3);
	}
}

void	ft_swap_a_and_b(int *tab_a, int *len_a, int *tab_b, int *len_b)
{
	ft_swap_a(tab_a, len_a);
	ft_swap_b(tab_b, len_b);
}
