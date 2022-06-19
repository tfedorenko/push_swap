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

int sort_five_new(t_stack **stack_a, t_stack **stack_b, int count)
{
	int count_sort_three;
	//t_stack *temp;
							ft_printf("Stack a: ");
		 print_stack(*stack_a);
		 ft_printf("Stack b: ");
		 print_stack(*stack_b);

	while (check_if_sorted(stack_a) && stack_b != NULL)
	{
		while(ft_stack_size(*stack_a) > 3)
		{
			if ((*stack_a)->data == find_min(*stack_a))
			{
				pb(stack_b, stack_a);
				count++;
				// ft_printf("size: %d\n", ft_stack_size(*stack_a));
							/*ft_printf("Stack a: ");
		 print_stack(*stack_a);
		 ft_printf("Stack b: ");
		 print_stack(*stack_b);*/
			} 
				
			else
			{
				ra(stack_a);
				count++;
			}
			/*ft_printf("Stack a: ");
		 print_stack(*stack_a);
		 ft_printf("Stack b: ");
		 print_stack(*stack_b);*/
			// ft_printf("size: %d\n", ft_stack_size(*stack_a));
			
		}
//ft_printf("I'm here\n");
		/*ft_printf("Stack a: ");
		 print_stack(*stack_a);
		 ft_printf("Stack b: ");
		 print_stack(*stack_b);*/
	
		while (check_if_sorted(stack_a))
			count_sort_three = sort_three(stack_a);
		count = count + count_sort_three;

		//temp = *stack_b;
		//if(temp->data == find_min(stack_b))
			
	//ft_printf("I'm here3\n");
		pa(stack_a, stack_b);
		count++;
			ft_printf("I'm here3\n");
	
		pa(stack_a, stack_b);
		count++;



		
	}
	return (count);
}
