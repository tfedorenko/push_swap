/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_minisort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:08:00 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/09 20:23:00 by tfedoren         ###   ########.fr       */
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

void	push_swap_minisort(t_stack **stack_a, t_stack **stack_b)
{
	// t_stack *max;


	pb(stack_b, stack_a);
	pb(stack_b, stack_a);
	print_stack(*stack_a);
	
	// *max = find_max(*stack_a);
	// printf("Max= %d\n", max->data);
	while (check_if_sorted(stack_a) && stack_b != NULL)
	{
		push_swap_microsort(stack_a, stack_b);
		if ((*stack_a)->data < (*stack_b)->data)
			pa(stack_a, stack_b);
		else
			rb(stack_b);
		pa(stack_a, stack_b);
	}

	return ;
}
// 1 2 3 4 5
// 2 1 3 4 5
// 3 1 2 4 5
// 4 1 2 3 5
// 5 1 2 3 4
// 1 3 2 4 5

