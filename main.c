/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferreir <pferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:33:38 by pferreir          #+#    #+#             */
/*   Updated: 2023/03/23 00:53:55 by pferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_b(int *tab_b, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		tab_b[i] = -1;
		i++;
	}
}

int	ft_init(int **a, int **b, int size)
{
	*a = malloc(sizeof(int) * size);
	if (!*a)
		return (1);
	*b = malloc(sizeof(int) * size);
	if (!*b)
		return (free(*a), 1);
	ft_init_b(*b, size);
	return (0);
}

int	sort_small_numbers(int *a, int *b, int argc)
{
	if (argc == 3)
		return (sort_two(a, argc - 1), free(a), free(b), 0);
	if (argc == 4)
		return (sort_three(a, argc - 1), free(a), free(b), 0);
	if (argc <= 6)
		return (sort_five(a, b, argc - 1), free(a), free(b), 0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;

	if (ft_init(&a, &b, argc - 1))
		return (write(2, "malloc error\n", 14), 1);
	if (!check_input(argc, a, argv))
		return (write(2, "Error\n", 6), free(a), free(b), 1);
	if (argc == 2)
		return (free(a), free(b), 0);
	else if (!stack_is_sorted(a, argc - 1))
		return (free(a), free(b), 0);
	transform_value_to_index(a, argc - 1);
	if (!sort_small_numbers(a, b, argc))
		return (0);
	if (argc - 1 < 10)
		push_all(a, b, argc - 1, 3);
	else if (argc - 1 < 250)
		push_all(a, b, argc - 1, 5);
	else
		push_all(a, b, argc - 1, 10);
	sort_three(a, argc - 1);
	return (push_back_all(a, b, argc - 1), free(a), free(b), 0);
}
