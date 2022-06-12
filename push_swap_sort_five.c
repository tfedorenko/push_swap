/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_minisort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:08:00 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/12 22:06:33 by tfedoren         ###   ########.fr       */
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
// void	 sort_four(t_stack **stack_a, t_stack **stack_b)
// {
// 	if (((*stack_a)->data == find_max(*stack_a)) || (*stack_a)->data == find_min(*stack_a))
// 		pb(stack_b, stack_a);
// 	else if (((*stack_a)->next->next->next->data == find_max(*stack_a)) && \
// 		((*stack_a)->next->next->next->data == find_min(*stack_a)))
// 		{
// 			rra(stack_a);
// 			pb(stack_b, stack_a);
// 		}
// 	else
// 		pb(stack_b, stack_a);
// 	while (check_if_sorted(stack_a) && stack_b != NULL)
// 		push_swap_microsort(stack_a, stack_b);
// 	ft_printf("Sorted stack after microsort: ");
// 	print_stack(*stack_a);
// 	ft_printf("Stack b: ");
// 	print_stack(*stack_b);
// 	if ((*stack_b)->data > find_max(*stack_a))
// 	// if (!check_if_sorted(stack_a))
// 	{
// 		printf("I'm here1");
// 		pa(stack_a, stack_b);
// 		return ;
// 	}
// 	else if ((*stack_b)->data < find_min(*stack_a))
// 	{
// 	// 		ft_printf("Stack a: ");
// 	// print_stack(*stack_a);
// 		printf("I'm here2\n");
// 		pa(stack_a, stack_b);
// 		rra(stack_a);
// 		return ;
// 	}
// 	else 
// 	// if ((*stack_b)->data > (*stack_a)->data)
// 	{
// 		if ((*stack_b)->data > (*stack_a)->next->data)
// 		{
// 			rra(stack_a);
// 			pa(stack_a, stack_b);
// 			ra(stack_a);
// 			return ;
// 		}
// 		if ((*stack_b)->data < (*stack_a)->next->data)
// 		{
// 			ra(stack_a);
// 			pa(stack_a, stack_b);
// 			ra(stack_a);
// 			ra(stack_a);
// 			return ;
// 		}
// 	}
// 	return ;
// }

// void	sort_five(t_stack **stack_a, t_stack **stack_b)
// {
// 	t_stack	*temp;
	
// 	if (((*stack_a)->next->next->next->next->data == find_max(*stack_a)) || \
// 		((*stack_a)->next->next->next->next->data == find_min(*stack_a)))
// 		// rra(stack_a);
// 	// if ((*stack_a)->next->next->next->next->data == find_min(*stack_a))
// 		rra(stack_a);
// 	temp = *stack_a;
// 	*stack_a = (*stack_a)->next;
// 	while (check_if_sorted(stack_a) && stack_b != NULL)	
// 		sort_four (stack_a, stack_b);
// 	push(stack_b, pop(&temp));
// 	if ((*stack_b)->data > find_max(*stack_a))
// 	{
// 		pa(stack_a, stack_b);
// 		return ;
// 	}
// 	if ((*stack_b)->data < find_min(*stack_a))
// 	{
// 		pa(stack_a, stack_b);
// 		rra(stack_a);
// 		return ;
// 	}
// 	if ((*stack_b)->data > (*stack_a)->data && \
// 		(*stack_b)->data < (*stack_a)->next->data)
// 	{
// 		ra(stack_a);
// 		pa(stack_a, stack_b);
// 		rra(stack_a);
// 		rra(stack_a);
// 		return ;
// 	}
// 	if ((*stack_b)->data > (*stack_a)->next->data && \
// 		(*stack_b)->data < (*stack_a)->next->next->data)
// 	{
// 		ra(stack_a);
// 		ra(stack_a);
// 		pa(stack_a, stack_b);
// 		ra(stack_a);
// 		ra(stack_a);
// 		return ;
// 	}
// 	if ((*stack_b)->data > (*stack_a)->next->next->data && \
// 		(*stack_b)->data < (*stack_a)->next->next->next->data)
// 	{
// 		rra(stack_a);
// 		pa(stack_a, stack_b);
// 		ra(stack_a);
// 		return ;
// 	}
// }

// void	push_swap_minisort(t_stack **stack_a, t_stack **stack_b)
// {
// 	int	stack_size;

// 	stack_size = (ft_stack_size(*stack_a));
// 	if (ft_stack_size(*stack_a) == 4)
// 	{
// 		sort_four(stack_a, stack_b);
// 		return ;
// 	}
// 	if (ft_stack_size(*stack_a) == 5)
// 	{
// 		sort_five(stack_a, stack_b);
// 		return ;
// 	}
// 	return ;
// }
// void	push_swap_minisort(t_stack **stack_a, t_stack **stack_b)
// {
// 	int	stack_size;

// 	stack_size = (ft_stack_size(*stack_a));
// 	if (ft_stack_size(*stack_a) == 4)
// 	{
// 		sort_four(stack_a, stack_b);
// 		return ;
// 	}
// 	if (ft_stack_size(*stack_a) == 5)
// 	{
// 		sort_five(stack_a, stack_b);
// 		return ;
// 	}
// 	return ;
// }
// 1 2 3 4 5
// 2 1 3 4 5
// 3 1 2 4 5
// 4 1 2 3 5
// 5 1 2 3 4
// 1 3 2 4 5

// 2 1 4 3
// 2 4 1 3

// 3 4 1 2
// 3 1 4 2

int sort_five_new(t_stack **stack_a, t_stack **stack_b, int count)
{
	int count_sort_three;
	// int min;
	// int	max;
	// // int min_three;
	// // int	max_three;
	
	// min = find_min(*stack_a);
	// max = find_max(*stack_a);
	// ft_printf("min: %d\n", min);
	// ft_printf("max: %d\n", max);
	//int j;
	// pb(stack_b, stack_a);
	// count++;
	// ft_printf("count 1: %d\n", count);
	// pb(stack_b, stack_a);
	// count++;
	// ft_printf("count 2: %d\n", count);
	// ft_printf("size: %d\n", ft_stack_size(*stack_a));
	while (check_if_sorted(stack_a))
	{
		while(ft_stack_size(*stack_a) > 3)
		{
			if ((*stack_a)->data == find_min(*stack_a))
			{
				pb(stack_b, stack_a);
				count++;
			} 
				// ft_printf("size: %d\n", ft_stack_size(*stack_a));
			else
			{
				ra(stack_a);
				count++;
			}
			// ft_printf("size: %d\n", ft_stack_size(*stack_a));
			
		}

	
		while (check_if_sorted(stack_a) && stack_b != NULL)
			count_sort_three = sort_three(stack_a);
		count = count + count_sort_three;
		// ft_printf("count 3: %d\n", count);
		// ft_printf("Sorted stack after microsort: ");
		// print_stack(*stack_a);
		// ft_printf("Stack b: ");
		// print_stack(*stack_b);
		pa(stack_a, stack_b);
		count++;
		// ft_printf("Sorted stack after microsort1: ");
		// print_stack(*stack_a);
		// ft_printf("Stack b1: ");
		// print_stack(*stack_b);
		pa(stack_a, stack_b);
		count++;
		// ft_printf("Sorted stack after microsort2: ");
		// print_stack(*stack_a);
		// ft_printf("Stack b2: ");
		// print_stack(*stack_b);
		// min_three = find_min(*stack_a);
		// max_three = find_max(*stack_a);
	
		// if (stack_b->data < min_three)
		// pa(stack_a, stack_b);
		// count++;
		// ft_printf("Sorted stack 22: ");
		// print_stack(*stack_a);
		// ft_printf("Stack b: ");
		// print_stack(*stack_b);


		
	}
	return (count);
}
