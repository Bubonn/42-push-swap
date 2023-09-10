/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkres.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:06:45 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/02 16:44:06 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_checkres_befor_sort(int *tab_a, int *len_a)
{
	int	i;

	i = 1;
	if (*len_a == 1)
		return (1);
	while (i < *len_a)
	{
		if (tab_a[i] < tab_a[i - 1])
			return (0);
		i++;
	}
	return (1);
}

int	ft_checkres_after_sort(int *tab_a, int *len_a, int *len_b)
{
	int	i;

	i = 1;
	if (*len_b > 0)
		return (0);
	while (i < *len_a)
	{
		if (tab_a[i] < tab_a[i - 1])
			return (0);
		i++;
	}
	return (1);
}
