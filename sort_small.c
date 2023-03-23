/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferreir <pferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:06:53 by pferreir          #+#    #+#             */
/*   Updated: 2023/03/22 03:09:26 by pferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(int *n, int size)
{
	int	i;

	i = size - ft_strlen_tab(n, size);
	if (ft_strlen_tab(n, size) > 2)
	{
		i = size - ft_strlen_tab(n, size);
		if (n[i] > n[i + 1] && n[i] > n[i + 2])
		{
			rotate_a(n, size);
			if (n[i] > n[i + 1])
				swap_a(n, size);
		}
		else if (n[i] < n[i + 1] && n[i + 1] > n[i + 2])
		{
			reverse_rotate_a(n, size);
			if (n[i] > n[i + 1])
				swap_a(n, size);
		}
		else if (n[i + 2] > n[i + 1] && n[i + 2] > n[i])
		{
			if (n[i] > n[i + 1])
				swap_a(n, size);
		}
	}
}

void	sort_two(int *n, int size)
{
	if (n[0] > n[1])
		swap_a(n, size);
}

void	sort_five(int *a, int *b, int s)
{
	while (ft_strlen_tab(a, s) > 3)
	{
		while (a[s - ft_strlen_tab(a, s)] >= s - 3)
			rotate_a(a, s);
		push_b(a, b, s);
	}
	sort_three(a, s);
	if (ft_strlen_tab(b, s) > 1
		&& b[s - ft_strlen_tab(b, s)] < b[s - ft_strlen_tab(b, s) + 1])
		swap_b(b, s);
	while (ft_strlen_tab(b, s) != 0)
		push_a(a, b, s);
}
