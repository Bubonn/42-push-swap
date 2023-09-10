/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:47:27 by jdubilla          #+#    #+#             */
/*   Updated: 2022/01/09 17:48:00 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <unistd.h>

void	ft_push_a(int *tab_a, int *len_a, int *tab_b, int *len_b)
{
	int	i;
	int	j;

	i = 1;
	j = *len_a;
	if (*len_b)
	{
		while (j)
		{
			tab_a[j] = tab_a[j - 1];
			j--;
		}
		tab_a[0] = tab_b[0];
		*len_a += 1;
		while (i < *len_b)
		{
			tab_b[i - 1] = tab_b[i];
			i++;
		}
		*len_b -= 1;
		write(1, "pa\n", 3);
	}
}

void	ft_push_b(int *tab_a, int *len_a, int *tab_b, int *len_b)
{
	int	i;
	int	j;

	i = 1;
	j = *len_b;
	if (*len_a)
	{
		while (j)
		{
			tab_b[j] = tab_b[j - 1];
			j--;
		}
		tab_b[0] = tab_a[0];
		*len_b += 1;
		while (i < *len_a)
		{
			tab_a[i - 1] = tab_a[i];
			i++;
		}
		*len_a -= 1;
		write(1, "pb\n", 3);
	}
}
