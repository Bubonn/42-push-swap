/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:44:35 by jdubilla          #+#    #+#             */
/*   Updated: 2022/01/11 17:02:56 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_taillemot(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static	int	ft_nbrmots(const char *str, char c)
{
	int	i;
	int	mots;

	mots = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		i = ft_taillemot(str, c);
		str += i;
		if (i > 0)
			mots++;
	}
	return (mots);
}

static	void	ft_freetab(char **res, int i)
{
	i--;
	while (i >= 0)
	{
		free(res[i]);
		i--;
	}
}

static	char	*ft_cpymot(const char *src, int n, int i, char **res)
{
	char	*dest;

	dest = malloc((n + 1) * sizeof(char));
	if (!dest)
	{
		ft_freetab(res, i);
		return (NULL);
	}
	dest[n] = '\0';
	while (n--)
		dest[n] = src[n];
	return (dest);
}

char	**ft_split(char const *str, char c)
{
	char	**res;
	int		tailletab;
	int		i;
	int		lenmot;

	res = NULL;
	if (!str)
		return (NULL);
	tailletab = ft_nbrmots(str, c);
	res = malloc((tailletab + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = -1;
	while (++i < tailletab)
	{
		while (*str && *str == c)
			str++;
		lenmot = ft_taillemot(str, c);
		res[i] = ft_cpymot(str, lenmot, i, res);
		str += lenmot;
	}
	res[tailletab] = 0;
	return (res);
}
