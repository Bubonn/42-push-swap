/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:49:31 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/02 16:25:35 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort_many_numbers(int *tab_a, int *len_a, int *tab_b, int *len_b)
{
	int	i;
	int	cpy_len_a;
	int	cpy_len_b;
	int	mult;

	mult = 1;
	while (ft_checkres_after_sort(tab_a, len_a, len_b) == 0)
	{
		i = 0;
		cpy_len_a = *len_a;
		while (i++ < cpy_len_a)
		{
			if ((tab_a[0] / mult) % 10 == 0)
				ft_push_b(tab_a, len_a, tab_b, len_b);
			else
				ft_rotate_a(tab_a, len_a);
		}
		mult *= 10;
		i = 0;
		cpy_len_b = *len_b;
		while (i++ < cpy_len_b)
			ft_push_a(tab_a, len_a, tab_b, len_b);
	}
}
