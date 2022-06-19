/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rotate_reverse.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:05:12 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/12 21:17:24 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_reverse(t_stack **stack)
{
	t_stack	*first_one;
	//t_stack	*last_one;
	t_stack	*before_last_one;
	t_stack	*temp;

	temp = *stack;
	first_one = *stack;
	*stack = (*stack)->next;
	while (temp->next)
	{
		before_last_one = temp;
		temp = temp->next;
	//	last_one = temp;
	}
	temp->next = first_one;
	before_last_one->next = NULL;
	*stack = temp;
}

void	rra(t_stack **stack)
{
	rotate_reverse(stack);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack)
{
	rotate_reverse(stack);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack1, t_stack **stack2)
{
	rotate_reverse(stack1);
	rotate_reverse(stack2);
	ft_printf("rrr\n");
}
