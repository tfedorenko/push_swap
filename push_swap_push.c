/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:42:32 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/01 21:13:11 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void push(t_stack **head, int data)
{
	t_stack *tmp = *head;
	if(!tmp)
	{
		*head = new_node(data);
		return ;
	}
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node(data);
}
// void	push(t_stack **stack_a, t_stack **stack_b)
// {
// 	// t_stack	*temp;
	
// 	// temp = *stack_b;
// 	// if (!(temp))
// 	// {
// 	// 	perror("Error thingy\n");
// 	// 	return ;
// 	// }
// 	// *stack_a = *stack_b;
// 	// *stack_b = (*stack_b)->next;
// 	// (*stack_b)->next = temp;
// }

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, pop(stack_b));
	ft_printf("pa\n");
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{	

	push(stack_b, pop(stack_a));
	ft_printf("pb\n");	
}
