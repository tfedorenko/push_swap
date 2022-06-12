/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:14:36 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/12 21:17:29 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*n;
	t_stack	*temp;

	temp = *stack;
	n = *stack;
	*stack = (*stack)->next;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = n;
	n->next = NULL;
}

void	ra(t_stack **stack)
{
	rotate(stack);
	ft_printf("ra\n");
}

void	rb(t_stack **stack)
{
	rotate(stack);
	ft_printf("rb\n");
}

void	rr(t_stack **stack1, t_stack **stack2)
{
	rotate(stack1);
	rotate(stack2);
	ft_printf("rr\n");
}
