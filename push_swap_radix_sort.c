/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_radix_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:27:25 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/20 20:54:31 by stena-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_array_of_ints(int *arr, int max)
{
	int	i;
	int	temp;

	i = 0;
	while (i < max)
	{
		i++;
		if (arr[i] < arr[i - 1])
		{
			temp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = temp;
			i = 0;
		}
	}
}

int	indexing_helper(int *arr, int data, int max)
{
	int	i;

	i = 0;
	while (i < max)
	{
		if (data == arr[i])
			return (i);
		i++;
	}
	return (i);
}

void	indexing(t_stack **stack, int max)
{
	t_stack	*temp;
	int		*temp_int;
	int		*arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(int) * max);
	temp = *stack;
	while (temp)
	{
		arr[i] = temp->data;
		i++;
		temp = temp->next;
	}
	sorting_array_of_ints(arr, max);
	temp = *stack;
	while (temp)
	{
		temp_int = &(temp->index);
		*temp_int = indexing_helper(arr, temp->data, max);
		temp = temp->next;
	}
	free(arr);
}

void	sorting_helper(t_stack **stack_a, t_stack **stack_b, int i)
{
	if (((((*stack_a)->index) >> i) & 1) == 1)
		ra(stack_a);
	else
		pb(stack_b, stack_a);
}

int	sorting(t_stack **stack_a, t_stack **stack_b)
{
	int	max_bits;
	int	i;
	int	j;
	int	size;

	size = ft_stack_size(*stack_a);
	max_bits = 0;
	i = 0;
	while (((ft_stack_size(*stack_a) - 1) >> max_bits) != 0)
		++max_bits;
	while (i < max_bits && check_if_sorted(stack_a))
	{
		j = 0;
		while (j < size)
		{
			sorting_helper(stack_a, stack_b, i);
			j++;
		}
		while (!is_empty(*stack_b))
			pa(stack_a, stack_b);
		i++;
	}
	return (0);
}
