/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_input_check.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:39:15 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/06 19:19:56 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	check_duplicates(int n, char **input)
{
	int	i;
	int	j;
	// int	*ptr;

	// ptr = (int *)malloc(sizeof(int) * n);
	i = 1;
	// while (input[i])
	// {
	// 	ptr[i] = ft_atoi(input[i]);
	// 	i++;
	// }
	// i = 1;
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
	int		*ptr;
	long	int_max;
	long	int_min;
	long	*temp;

	int_max = 2147483647;
	int_min = -2147483648;
	i = 1;
	
	while (i < n)
	{
		
		// temp[i] = ft_atoi(input[i]);
		if (ft_atoi(input[i]) > int_max || ft_atoi(input[i]) < int_min)
		{
			ft_printf("Error:some arguments are bigger or smaller than an integer");
			return (-1);
		}
		i++;
	}
		printf("I'm here");
		
	return (0);

}

int	check_input(int n, char **input)
{
	// if (!check_integers(n, input) && !check_duplicates(n, input) && check_max_integer(n, input))
		// return (0);
	if (!check_max_integer(n, input))
		return (0);
	else
		return (-1);
}
