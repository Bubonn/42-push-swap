/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 20:41:25 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/02 16:25:04 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

int		ft_base_deci_to_bin(int nbr);
int		*ft_checkarg(char *arg, int *len);
int		*ft_tab_to_index(int *tab_a, int *len_a);
int		*ft_tab_to_tab_bin(int *tab_a, int *len_a);
int		ft_checkres_befor_sort(int *tab_a, int *len_a);
int		ft_checkres_after_sort(int *tab_a, int *len_a, int *len_b);
void	ft_swap_a(int *tab_a, int *len_a);
void	ft_swap_b(int *tab_b, int *len_b);
void	ft_rotate_a(int *tab_a, int *len_a);
void	ft_rotate_b(int *tab_b, int *len_b);
void	ft_reverse_rotate_b(int *tab_b, int *len_b);
void	ft_reverse_rotate_a(int *tab_a, int *lent_a);
void	ft_sort_very_few_number(int *tab_a, int *len_a, int *tab_b, int *len_b);
void	ft_push_a(int *tab_a, int *len_a, int *tab_b, int *len_b);
void	ft_push_b(int *tab_a, int *len_a, int *tab_b, int *len_b);
void	ft_swap_a_and_b(int *tab_a, int *len_a, int *tab_b, int *len_b);
void	ft_sort_many_numbers(int *tab_a, int *len_a, int *tab_b, int *len_b);
void	ft_sort_few_numbers(int *tab_a, int *len_a, int *tab_b, int *len_b);
void	ft_rotate_a_and_b(int *tab_a, int *len_a, int *tab_b, int *len_b);
void	ft_rev_rotate_a_and_b(int *tab_a, int *len_a, int *tab_b, int *len_b);
char	*ft_args_to_str(int nbr_arg, char **tab, char *str);

#endif
