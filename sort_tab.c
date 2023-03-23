/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferreir <pferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:30:01 by pferreir          #+#    #+#             */
/*   Updated: 2023/03/15 21:21:19 by pferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	invert(int *n1, int *n2)
{
	int	tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void	sort_tab(int *n, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = i;
	while (i < size - 1)
	{
		k = i;
		while (j < size)
		{
			if (n[k] > n[j])
				k = j;
			j++;
		}
		invert(&n[i], &n[k]);
		i++;
		j = i + 1;
	}
}

void	fill_tab(int *n, int *ni, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ni[i] = n[i];
		i++;
	}
}

void	fill_tab_index(int *n1, int *n2, int *n, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (n1[i] == n[j])
				n2[j] = i;
			j++;
		}
		i++;
		j = 0;
	}
}

void	transform_value_to_index(int *n, int size)
{
	int	*n1;
	int	*n2;

	n1 = malloc(sizeof(int) * size);
	if (n1 == NULL)
	{
		write(2, "Malloc Error\n", 14);
		return ;
	}
	n2 = malloc(sizeof(int) * size);
	if (n2 == NULL)
	{
		free(n1);
		write(2, "Malloc Error\n", 14);
		return ;
	}
	fill_tab(n, n1, size);
	sort_tab(n1, size);
	fill_tab_index(n1, n2, n, size);
	fill_tab(n2, n, size);
	free(n1);
	free(n2);
}
