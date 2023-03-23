/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferreir <pferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:30:07 by pferreir          #+#    #+#             */
/*   Updated: 2023/03/22 04:11:53 by pferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char *c)
{
	int	i;

	i = 0;
	if (c == NULL || ft_strlen(c) == 0)
		return (0);
	while (c[i] == 32 || c[i] == '0')
		i++;
	if (ft_strlen(c) - i > 11)
		return (0);
	while (i < ft_strlen(c))
	{
		if (c[i] == '+' || c[i] == '-')
		{
			if ((i > 0 && c[i - 1] != 32)
				|| (c[i + 1] < '0' || c[i + 1] > '9'))
				return (0);
			i++;
		}
		else if (c[i] < '0' || c[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}

t_check_atoi	ft_atoi(char *c)
{
	t_check_atoi	r;
	long long		temp;
	long long		sign;

	r.val = 0;
	r.tst = 0;
	sign = ft_atoi_sign(c);
	temp = 0;
	if (ft_isdigit(c) == 1)
	{
		while (c && *c)
		{
			temp = *c - '0';
			r.val = 10 * r.val + temp;
			c++;
		}
		r.val = r.val * sign;
		if (r.val >= (long long)-2147483648 && r.val <= (long long)2147483647)
			r.tst = 1;
	}
	return (r);
}

int	stack_is_sorted(int *n, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (n[i] > n[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	check_input(int size, int *n, char **input)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (ft_atoi(input[i]).tst == 1)
		{
				n[i - 1] = ft_atoi(input[i]).val;
				i++;
		}
		else
			return (0);
	}
	if (is_duplicate(n, size - 1))
		return (0);
	return (1);
}
