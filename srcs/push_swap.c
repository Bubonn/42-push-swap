/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 19:56:07 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/03 16:22:19 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/push_swap.h"

void	push_swap(int *tab_a, int *len_a)
{
	int	len_b;
	int	*ptr_b;
	int	*tab_b;

	len_b = 0;
	ptr_b = &len_b;
	tab_b = malloc(sizeof(int) * *len_a);
	if (!tab_b)
		return ;
	if (*len_a <= 3)
		ft_sort_very_few_number(tab_a, len_a, tab_b, ptr_b);
	else if (*len_a <= 5)
		ft_sort_few_numbers(tab_a, len_a, tab_b, ptr_b);
	else
		ft_sort_many_numbers(tab_a, len_a, tab_b, ptr_b);
	free (tab_b);
}

int	main(int argc, char **argv)
{
	int		*tab_a;
	int		lentab_a;
	int		*ptr_a;
	char	*str;

	tab_a = NULL;
	lentab_a = 0;
	ptr_a = &lentab_a;
	str = NULL;
	if (argc > 1)
	{
		str = ft_args_to_str(argc, argv, str);
		tab_a = ft_checkarg(str, ptr_a);
		if (tab_a == NULL)
			write(2, "Error\n", 6);
		free(str);
		if (tab_a != NULL && ft_checkres_befor_sort(tab_a, ptr_a) == 0)
		{
			tab_a = ft_tab_to_index(tab_a, ptr_a);
			ft_tab_to_tab_bin(tab_a, ptr_a);
			push_swap(tab_a, ptr_a);
		}
		free(tab_a);
	}
	return (0);
}
