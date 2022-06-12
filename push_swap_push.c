/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:42:32 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/12 19:22:13 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack, int content)
{
	t_list	*tmp;

	tmp = *stack;
	if (!tmp)
	{
		*stack = new_node(content);
		return ;
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node(content);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, pop(stack_b));
	ft_printf("pa\n");
}

void	pb(t_list **stack_b, t_list **stack_a)
{	
	push(stack_b, pop(stack_a));
	ft_printf("pb\n");
}
