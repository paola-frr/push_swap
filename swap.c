/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferreir <pferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:30:04 by pferreir          #+#    #+#             */
/*   Updated: 2023/03/09 19:44:49 by pferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *n, int size)
{
	int	tmp;
	int	i;

	i = size - ft_strlen_tab(n, size);
	tmp = -1;
	if (ft_strlen_tab(n, size) > 1)
	{
		tmp = n[i];
		n[i] = n[i + 1];
		n[i + 1] = tmp;
	}
}

void	swap_a(int *n, int size)
{
	swap(n, size);
	write(1, "sa\n", 3);
}

void	swap_b(int *n, int size)
{
	swap(n, size);
	write(1, "sb\n", 3);
}

void	swap_ab(int *n1, int *n2, int size)
{
	swap(n1, size);
	swap(n2, size);
	write(1, "ss\n", 3);
}
