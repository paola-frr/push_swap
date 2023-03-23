/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferreir <pferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:30:20 by pferreir          #+#    #+#             */
/*   Updated: 2023/03/16 01:03:01 by pferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(int *src, int *dst, int size)
{
	if (ft_strlen_tab(src, size) > 0 && ft_strlen_tab(dst, size) < size)
	{
		dst[size - ft_strlen_tab(dst, size) - 1]
			= src[size - ft_strlen_tab(src, size)];
		src[size - ft_strlen_tab(src, size)] = -1;
	}
}

void	push_a(int *n1, int *n2, int size)
{
	push(n2, n1, size);
	write(1, "pa\n", 3);
}

void	push_b(int *n1, int *n2, int size)
{
	push(n1, n2, size);
	write(1, "pb\n", 3);
}
