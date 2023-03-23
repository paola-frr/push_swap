/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferreir <pferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:29:55 by pferreir          #+#    #+#             */
/*   Updated: 2023/03/15 17:10:09 by pferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(int *n, int size)
{
	int	i;
	int	tmp;

	i = size - ft_strlen_tab(n, size);
	tmp = -1;
	while (i < size - 1)
	{
		tmp = n[i];
		n[i] = n[i + 1];
		n[i + 1] = tmp;
		i++;
	}
}

void	rotate_a(int *n, int size)
{
	rotate(n, size);
	write(1, "ra\n", 3);
}

void	rotate_b(int *n, int size)
{
	rotate(n, size);
	write(1, "rb\n", 3);
}

void	rotate_ab(int *n1, int	*n2, int size)
{
	rotate(n1, size);
	rotate(n2, size);
	write(1, "rr\n", 3);
}
