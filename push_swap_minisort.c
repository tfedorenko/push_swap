/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_minisort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:08:00 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/10 23:09:56 by tfedoren         ###   ########.fr       */
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
	int stack_size;
	
	stack_size = (ft_stack_size(*stack_a));
	if(ft_stack_size(*stack_a) == 4)
	{
		if ((*stack_a)->next->next->next->data == find_max(*stack_a))
			rra(stack_a);
		if ((*stack_a)->next->next->next->data == find_min(*stack_a))
			ra(stack_a);
		pb(stack_b, stack_a);
		while (check_if_sorted(stack_a) && stack_b != NULL)
		{
			push_swap_microsort(stack_a, stack_b);
		}
		if ((*stack_b)->data > find_max(*stack_a))
		{
			pa(stack_a, stack_b);
			return ;
		}
		if ((*stack_b)->data < find_min(*stack_a))
		{
			pa(stack_a, stack_b);
			rra(stack_a);
			return ;
		}
		ft_printf("Stack_before_sort 5=: ");
		print_stack(*stack_a);
		if((*stack_b)->data > (*stack_a)->data)
		{
			if ((*stack_b)->data > (*stack_a)->data)
			rra(stack_a);
				ft_printf("Stack_after_rotate1: ");
			print_stack(*stack_a);
			pa(stack_a, stack_b);
				ft_printf("Stack_after_pa: ");
			print_stack(*stack_a);
			ra(stack_a);
			// ra(stack_a);
		}
		// if ((*stack_a)->data < (*stack_b)->data && (*stack_a)->next->data > (*stack_b)->data)
		// {
		// 	ra(stack_a);
		// 	ft_printf("Stack_after_rotate: ");
		// 	print_stack(*stack_a);

		// }
		// else
		// {
		// 	rra(stack_a);
		// }

		// pa(stack_a, stack_b);

		// if (check_if_sorted(stack_a))
		// {
		// 	ra(stack_a);

		// }

	}

		
	if(ft_stack_size(*stack_a) == 5)
	{
		pb(stack_b, stack_a);
		pb(stack_b, stack_a);
	}
	// pb(stack_b, stack_a);
	// ft_printf("Stack_a: ");
	// print_stack(*stack_a);
	// ft_printf("Stack_b: ");
	// print_stack(*stack_b);
	
	// while (check_if_sorted(stack_a) && stack_b != NULL)
	// {
	// 	push_swap_microsort(stack_a, stack_b);
	// 	ft_printf("After_microsort: ");
	// 	print_stack(*stack_a);
	// }
	// if (stack_size == 4)
	// {
		// 	// ft_printf("Stack_before_sort 5=: ");
		// 	// print_stack(*stack_a);
		// if ((*stack_b)->data > find_max(*stack_a))
		// {
		// 	pa(stack_a, stack_b);
		// 	return ;
		// }
		// if ((*stack_b)->data < find_min(*stack_a))
		// {
		// 	pa(stack_a, stack_b);
		// 	rra(stack_a);
		// 	return ;
		// }
		
		// if ((*stack_a)->data < (*stack_b)->data && (*stack_a)->next->data > (*stack_b)->data)
		// {
		// 	ra(stack_a);
		// 	ft_printf("Stack_after_rotate: ");
		// 	print_stack(*stack_a);
		// }
		// else
		// {
		// 	rra(stack_a);
		// 	ft_printf("Stack_after_reverse_rotate: ");
		// 	print_stack(*stack_a);
		// }
		// ft_printf("Stack_before_insert: ");
		// print_stack(*stack_a);
		// pa(stack_a, stack_b);
		// ft_printf("Stack_after_insert: ");
		// print_stack(*stack_a);
		// if (check_if_sorted(stack_a))
		// {
		// 	ra(stack_a);
		// 	printf("I'm here5\n");
		// }
		
	// ft_printf("Stack_a11: ");
	// print_stack(*stack_a);
	// }
	return ;
}
// 1 2 3 4 5
// 2 1 3 4 5
// 3 1 2 4 5
// 4 1 2 3 5
// 5 1 2 3 4
// 1 3 2 4 5

