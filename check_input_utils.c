/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pferreir <pferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:31:42 by pferreir          #+#    #+#             */
/*   Updated: 2023/03/22 03:26:29 by pferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *s)
{
	int	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

long	ft_atoi_sign(char *c)
{
	long	sign;

	sign = 1;
	while (*c == 32)
		c++;
	if (*c == '+' || *c == '-' )
	{
		if (*c == '-')
			sign *= -1;
		c++;
	}
	return (sign);
}

int	is_duplicate(int *n, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= size)
	{
		j = i + 1;
		while (j < size)
		{
			if (n[i] == n[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
