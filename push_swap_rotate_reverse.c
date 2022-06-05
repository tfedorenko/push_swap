/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rotate_reverse.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:05:12 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/05 18:38:04 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	rotate_reverse(t_stack **stack)
{
	t_stack	*first_one;
	t_stack	*last_one;
	t_stack	*before_last_one;
	t_stack	*temp;

	temp = *stack;
	first_one = *stack;
	*stack = (*stack)->next;
	while (temp->next)
	{
		// printf("rotate_reverse thingy\n");
		before_last_one = temp;
		temp = temp->next;
		last_one = temp;
	}
			// printf("before_last_one=%d\n", before_last_one->data);
			// printf("last_one=%d\n", last_one->data);
			// printf("first_one=%d\n", first_one->data);
			
		
	temp->next = first_one;
	// print_stack(temp);
	before_last_one->next = NULL;
	// print_stack(temp);
	*stack = temp;
	// print_stack(stack);
}

void	rra(t_stack **stack)
{
	rotate(stack);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack)
{
	rotate(stack);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack1, t_stack **stack2)
{
	rotate(stack1);
	rotate(stack2);
	ft_printf("rrr\n");
}
