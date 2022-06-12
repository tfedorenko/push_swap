/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rotate_reverse.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:05:12 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/12 19:20:52 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_reverse(t_list **stack)
{
	t_list	*first_one;
	t_list	*last_one;
	t_list	*before_last_one;
	t_list	*temp;

	temp = *stack;
	first_one = *stack;
	*stack = (*stack)->next;
	while (temp->next)
	{
		before_last_one = temp;
		temp = temp->next;
		last_one = temp;
	}
	temp->next = first_one;
	before_last_one->next = NULL;
	*stack = temp;
}

void	rra(t_list **stack)
{
	rotate_reverse(stack);
	ft_printf("rra\n");
}

void	rrb(t_list **stack)
{
	rotate_reverse(stack);
	ft_printf("rrb\n");
}

void	rrr(t_list **stack1, t_list **stack2)
{
	rotate_reverse(stack1);
	rotate_reverse(stack2);
	ft_printf("rrr\n");
}
