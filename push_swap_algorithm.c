/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algorithm.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferreir <pferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1223/02/12 12:11:34 by pferreir          #+#    #+#             */
/*   Updated: 2023/03/23 01:00:50 by pferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_push_value(int *b, int size, int value)
{
	int	i;

	i = size - ft_strlen_tab(b, size);
	while (i < size)
	{
		if (value == b[i])
			return (i);
		i++;
	}
	return (i);
}

void	push_big_value(int *a, int *b, int size)
{
	int	big;
	int	next_big;
	int	value;

	value = a[size - ft_strlen_tab(a, size)] - 1;
	big = index_push_value(b, size, value);
	next_big = index_push_value(b, size, value - 1);
	if (big <= size - (ft_strlen_tab(b, size) / 2))
	{
		if (next_big < big)
			push_next_by_rotate(a, b, size, value - 1);
		push_next_by_rotate(a, b, size, value);
	}
	else if (big > size - (ft_strlen_tab(b, size) / 2))
	{
		if (next_big > big)
			push_next_by_reverse_rotate(a, b, size, (value - 1));
		push_next_by_reverse_rotate(a, b, size, value);
	}
}

void	push_next_by_rotate(int *a, int *b, int size, int value)
{
	while (b[size - ft_strlen_tab(b, size)] != value)
		rotate_b(b, size);
	push_a(a, b, size);
}

void	push_next_by_reverse_rotate(int *a, int *b, int size, int value)
{
	while (b[size - ft_strlen_tab(b, size)] != value)
		reverse_rotate_b(b, size);
	push_a(a, b, size);
}

void	push_back_all(int *a, int *b, int size)
{
	while (ft_strlen_tab(b, size) != 0)
	{
		push_big_value(a, b, size);
		if (a[size - ft_strlen_tab(a, size)]
			> a[size - ft_strlen_tab(a, size) + 1])
			swap_a(a, size);
	}
}
