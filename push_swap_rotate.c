/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:14:36 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/12 19:20:47 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*n;
	t_list	*temp;

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

void	ra(t_list **stack)
{
	rotate(stack);
	ft_printf("ra\n");
}

void	rb(t_list **stack)
{
	rotate(stack);
	ft_printf("rb\n");
}

void	rr(t_list **stack1, t_list **stack2)
{
	rotate(stack1);
	rotate(stack2);
	ft_printf("rr\n");
}
