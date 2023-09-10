/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_to_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:24:58 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/02 16:46:02 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdlib.h>

int	*ft_tab_to_index(int *tab_a, int *len_a)
{
	int	i;
	int	j;
	int	index;
	int	*tab_index;

	i = 0;
	tab_index = malloc(sizeof(int) * *len_a);
	if (!tab_index)
		return (NULL);
	while (i < *len_a)
	{
		j = 0;
		index = 0;
		while (j < *len_a)
		{
			if (tab_a[i] > tab_a[j])
				index++;
			j++;
		}
		tab_index[i] = index;
		i++;
	}
	free(tab_a);
	tab_a = tab_index;
	return (tab_a);
}
