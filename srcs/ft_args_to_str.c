/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:06:18 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/03 16:17:54 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdlib.h>

static	int	ft_len_args(int nbr_arg, char **tab)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	j = 0;
	len = 0;
	while (i < nbr_arg)
	{
		j = 0;
		while (tab[i][j])
		{
			j++;
			len++;
		}
		i++;
	}
	return (len);
}

static char	*ft_cpy_arg_to_str(int nbr_arg, char **tab, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = 0;
	while (i < nbr_arg)
	{
		j = 0;
		while (tab[i][j])
		{
			str[k] = tab[i][j];
			j++;
			k++;
		}
		i++;
		if (i < nbr_arg)
		{
			str[k] = ' ';
			k++;
		}
	}
	str[k] = '\0';
	return (str);
}

char	*ft_args_to_str(int nbr_arg, char **tab, char *str)
{
	int	len;

	len = ft_len_args(nbr_arg, tab);
	str = malloc(sizeof(char) * (len + (nbr_arg - 1)));
	if (!str)
		return (NULL);
	ft_cpy_arg_to_str(nbr_arg, tab, str);
	return (str);
}
