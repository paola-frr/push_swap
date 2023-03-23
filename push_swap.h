/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferreir <pferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:18:27 by pferreir          #+#    #+#             */
/*   Updated: 2023/03/22 03:58:43 by pferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct CHECK_ATOI
{
	long	val;
	int		tst;
}	t_check_atoi;

int				is_duplicate(int *n, int size);
int				stack_is_sorted(int *n, int size);
int				check_input(int size, int *n, char **input);

int				ft_strlen(char *s);
int				ft_isdigit(char *c);
t_check_atoi	ft_atoi(char *nptr);
long			ft_atoi_sign(char *c);

int				ft_strlen_tab(int *n, int size);
void			ft_init_b(int *tab_b, int size);
int				ft_init(int **a, int **b, int argc);

void			sort_three(int *n, int size);
void			sort_two(int *n, int size);
void			sort_five(int *a, int *b, int size);

void			push_all(int *a, int *b, int size, int divider);
int				index_push_value(int *b, int size, int value);
void			push_next_by_rotate(int *a, int *b, int size, int value);
void			push_next_by_reverse_rotate(int *a, int *b, int size, int val);
void			push_big_value(int *n1, int *n2, int size);
void			push_back_all(int *n1, int *n2, int size);

void			push(int *src, int *dst, int size);
void			push_a(int *n1, int *n2, int size);
void			push_b(int *n1, int *n2, int size);

void			reverse_rotate(int *n, int size);
void			reverse_rotate_a(int *n, int size);
void			reverse_rotate_b(int *n, int size);
void			reverse_rotate_ab(int *n, int size);

void			rotate(int *n, int size);
void			rotate_a(int *n, int size);
void			rotate_b(int *n, int size);
void			rotate_ab(int *n1, int *n2, int size);

void			sort_three(int *n, int size);
void			sort_two(int *n, int size);

void			invert(int *n1, int *n2);
void			sort_tab(int *n, int size);
void			fill_tab(int *n, int *ni, int size);
void			fill_tab_index(int *n1, int *n2, int *n, int size);
void			transform_value_to_index(int *n, int size);

void			swap(int *n1, int size);
void			swap_a(int *n, int size);
void			swap_b(int *n, int size);
void			swap_ab(int *n1, int *n2, int size);

#endif