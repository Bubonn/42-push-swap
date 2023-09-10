/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:40:22 by jdubilla          #+#    #+#             */
/*   Updated: 2022/01/11 16:47:26 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int			i;
	int			signe;
	long long	res;

	i = 0;
	signe = 1;
	res = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i])
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	res = res * signe;
	if (res > 2147483647 || res < -2147483648)
		return (0);
	return (res);
}
