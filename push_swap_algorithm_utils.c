/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algorithm_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferreir <pferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:50:43 by pferreir          #+#    #+#             */
/*   Updated: 2023/03/23 00:57:20 by pferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen_tab(int *n, int size)
{
	int	i;

	i = 0;
	while (i < size && n[i] == -1)
		i++;
	return (size - i);
}

void	push_all(int *a, int *b, int size, int divider)
{
	int	i;
	int	k;

	i = 1;
	while (i <= divider)
	{
		k = i * size / divider;
		if (i == divider)
			k = size - 3;
		while (ft_strlen_tab(b, size) < k)
		{
			while (a[size - ft_strlen_tab(a, size)] >= k)
				rotate_a(a, size);
			push_b(a, b, size);
			if (b[size - ft_strlen_tab(b, size)] > k - size / divider / 2)
			{
				if ((a[size - ft_strlen_tab(a, size)] >= k))
					rotate_ab(a, b, size);
				else
					rotate_b(b, size);
			}
		}
		i++;
	}
}
