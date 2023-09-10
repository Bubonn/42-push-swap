/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:38:54 by jdubilla          #+#    #+#             */
/*   Updated: 2022/01/12 14:30:24 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdlib.h>

int	ft_base_deci_to_bin(int nbr)
{
	int		res;
	int		mult;

	res = 0;
	mult = 1;
	while (nbr)
	{
		res += (nbr % 2) * mult;
		mult *= 10;
		nbr /= 2;
	}
	return (res);
}

int	*ft_tab_to_tab_bin(int *tab_a, int *len_a)
{
	int	i;

	i = 0;
	while (i < *len_a)
	{
		tab_a[i] = ft_base_deci_to_bin(tab_a[i]);
		i++;
	}
	return (tab_a);
}
