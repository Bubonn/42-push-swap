/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_very_few_numbers.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:05:13 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/02 16:58:09 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_sort_very_few_numbers_bis(int *tab_a, int *len_a)
{
	if (tab_a[1] == 1)
		ft_swap_a(tab_a, len_a);
	else
	{
		ft_swap_a(tab_a, len_a);
		ft_swap_a(tab_a, len_a);
	}
	ft_reverse_rotate_a(tab_a, len_a);
}

void	ft_sort_very_few_number(int *tab_a, int *len_a, int *tab_b, int *len_b)
{
	if (tab_a[0] == 0)
	{
		ft_push_b(tab_a, len_a, tab_b, len_b);
		ft_swap_a(tab_a, len_a);
		ft_push_a(tab_a, len_a, tab_b, len_b);
	}
	else if (tab_a[1] == 0)
	{
		ft_swap_a(tab_a, len_a);
		if (ft_checkres_after_sort(tab_a, len_a, len_b) == 0)
		{
			ft_reverse_rotate_a(tab_a, len_a);
			ft_swap_a(tab_a, len_a);
		}
		else
		{
			ft_swap_a(tab_a, len_a);
			ft_swap_a(tab_a, len_a);
		}
	}
	else
		ft_sort_very_few_numbers_bis(tab_a, len_a);
}
