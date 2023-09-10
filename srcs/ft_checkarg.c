/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkarg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 20:39:47 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/02 16:42:57 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/push_swap.h"

static int	ft_checkstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] < '0' || str[i] > '9') && str[i] != ' ') && str[i] != '-'
			&& str[i] != '+')
			return (1);
		if ((str[i] == '+' || str[i] == '-') && (str[i + 1] == '+' || str[i + 1]
				== '-'))
			return (1);
		if ((str[i] >= '0' && str[i] <= '9') && (str[i + 1] == '+' || str[i + 1]
				== '-'))
			return (1);
		i++;
	}
	return (0);
}

static int	ft_checkdouble(int *nbrs, int lentab)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < lentab)
	{
		temp = nbrs[i];
		j = i + 1;
		while (j < lentab)
		{
			if (nbrs[j] == temp)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	*ft_atoitab(int *nbrs, char **tab, int lentab)
{
	int	i;

	i = 0;
	while (i < lentab)
	{
		nbrs[i] = ft_atoi(tab[i]);
		if (nbrs[i] == 0 && tab[i][0] != '0')
			return (NULL);
		i++;
	}
	return (nbrs);
}

static int	ft_lentab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	*ft_checkarg(char *arg, int *len)
{
	int		*nbrs;
	char	**tab;
	int		i;

	nbrs = NULL;
	tab = NULL;
	i = -1;
	if (ft_checkstr(arg) == 1)
		return (NULL);
	tab = ft_split(arg, ' ');
	if (!tab)
		return (NULL);
	*len = ft_lentab(tab);
	nbrs = malloc(sizeof(int) * *len);
	if (!nbrs)
		return (NULL);
	if (ft_atoitab(nbrs, tab, *len) == NULL)
		return (NULL);
	while (tab[++i])
		free(tab[i]);
	free(tab);
	if (ft_checkdouble(nbrs, *len) == 1)
		return (NULL);
	return (nbrs);
}
