/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_five.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:08:00 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/19 23:26:51 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_stack *stack)
{
	int	max;

	max = INT_MIN;
	while (stack != NULL)
	{
		if (max < stack->data)
			max = stack->data;
		stack = stack->next;
	}
	return (max);
}

int	find_min(t_stack *stack)
{
	int	min;

	min = INT_MAX;
	while (stack != NULL)
	{
		if (min > stack->data)
			min = stack->data;
		stack = stack->next;
	}
	return (min);
}

int sort_five_new(t_stack **stack_a, t_stack **stack_b, int count)
{
	int count_sort_three;

	while (check_if_sorted(stack_a) && stack_b != NULL)
	{
		while(ft_stack_size(*stack_a) > 3)
		{
			if ((*stack_a)->data == find_min(*stack_a))
			{
				pb(stack_b, stack_a);
				count++;
			} 		
			else
			{
				ra(stack_a);
				count++;
			}	
		}
		while (check_if_sorted(stack_a))
			count_sort_three = sort_three(stack_a);
		count = count + count_sort_three;
		pa(stack_a, stack_b);
		count++;	
		pa(stack_a, stack_b);
		count++;	
	}
	return (count);
}
