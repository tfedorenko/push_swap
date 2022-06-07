/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_input_check.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:39:15 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/07 19:21:24 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicates(int n, char **input)
{
	int	i;
	int	j;

	i = 1;
	while (i < n - 1)
	{
		j = i + 1;
		while (j < n)
		{
			if (ft_atoi(input[i]) == ft_atoi(input[j]))
			{
				ft_printf("Error: some arguments are duplicates\n");
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_integers(int n, char **input)
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (input[i][j])
		{
			if (j == 0 && input[i][j] == '-' && input[i][j + 1])
			{
				j++;
				continue ;
			}
			if (!ft_isdigit(input[i][j]))
			{
				ft_printf("Error: some arguments are not integers\n");
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_max_integer(int n, char **input)
{
	int		i;

	i = 1;
	while (i < n)
	{
		if (ft_atol(input[i]) > INT_MAX || ft_atol(input[i]) < INT_MIN)
		{
			ft_printf("Error:some arguments are bigger/smaller than an int\n");
			return (-1);
		}
		i++;
	}
	return (0);
}

int	check_input(int n, char **input)
{
	if (!check_integers(n, input) && !check_duplicates(n, input) \
		&& !check_max_integer(n, input))
		return (0);
	else
		return (-1);
}
