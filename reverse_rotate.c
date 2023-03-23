/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferreir <pferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:29:51 by pferreir          #+#    #+#             */
/*   Updated: 2023/03/23 00:55:39 by pferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(int *n, int size)
{
	int	i;
	int	tmp;

	tmp = n[size - 1];
	i = size - ft_strlen_tab(n, size) + 1;
	while (size != i)
	{
		n[size - 1] = n[size - 2];
		size--;
	}
	n[i - 1] = tmp;
}

void	reverse_rotate_a(int *n, int size)
{
	reverse_rotate(n, size);
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(int *n, int size)
{
	reverse_rotate(n, size);
	write(1, "rrb\n", 4);
}

void	reverse_rotate_ab(int *n, int size)
{
	reverse_rotate(n, size);
	write(1, "rrr\n", 4);
}
