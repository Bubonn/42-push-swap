/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_few_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:06:54 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/02 16:22:45 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_assign_tab(int *tab)
{
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 10;
	tab[3] = 11;
	tab[4] = 100;
}

static void	ft_sort_tab_b(int *tab_a, int *len_a, int *tab_b, int *len_b)
{
	int	i;
	int	tab[5];

	i = *len_b - 1;
	ft_assign_tab(tab);
	while (i >= 0)
	{
		if (tab_b[0] == tab[i])
		{
			ft_push_a(tab_a, len_a, tab_b, len_b);
			i--;
		}
		else if (*len_b == 4 && tab[i] == tab_b[3])
			ft_reverse_rotate_b(tab_b, len_b);
		else if (*len_b == 3 && tab[i] == tab_b[2])
			ft_reverse_rotate_b(tab_b, len_b);
		else
			ft_rotate_b(tab_b, len_b);
	}
}

void	ft_sort_few_numbers(int *tab_a, int *len_a, int *tab_b, int *len_b)
{
	int	i;
	int	cpy_len_a;
	int	tab[5];
	int	max;
	int	max_b;

	i = 0;
	ft_assign_tab(tab);
	cpy_len_a = *len_a;
	max = tab[*len_a - 1];
	max_b = tab[*len_a - 2];
	while (i + 2 < cpy_len_a)
	{
		if (tab_a[0] == max || tab_a[0] == max_b)
			ft_rotate_a(tab_a, len_a);
		else
		{
			ft_push_b(tab_a, len_a, tab_b, len_b);
			i++;
		}
	}
	if (tab_a[0] > tab_a[1])
		ft_swap_a(tab_a, len_a);
	ft_sort_tab_b(tab_a, len_a, tab_b, len_b);
}
