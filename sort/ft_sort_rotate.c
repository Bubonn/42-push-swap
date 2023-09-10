/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:50:27 by jdubilla          #+#    #+#             */
/*   Updated: 2022/01/09 17:50:46 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <unistd.h>

void	ft_rotate_a(int *tab_a, int *len_a)
{
	int	i;
	int	tmp;

	i = 0;
	if (*len_a > 1)
	{
		tmp = tab_a[0];
		while (i + 1 < *len_a)
		{
			tab_a[i] = tab_a[i + 1];
			i++;
		}
		tab_a[*len_a - 1] = tmp;
		write(1, "ra\n", 3);
	}
}

void	ft_rotate_b(int *tab_b, int *len_b)
{
	int	i;
	int	tmp;

	i = 0;
	if (*len_b > 1)
	{
		tmp = tab_b[0];
		while (i + 1 < *len_b)
		{
			tab_b[i] = tab_b[i + 1];
			i++;
		}
		tab_b[*len_b - 1] = tmp;
		write(1, "rb\n", 3);
	}
}

void	ft_rotate_a_and_b(int *tab_a, int *len_a, int *tab_b, int *len_b)
{
	ft_rotate_a(tab_a, len_a);
	ft_rotate_b(tab_b, len_b);
}
