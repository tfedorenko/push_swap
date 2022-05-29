/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:04:33 by tfedoren          #+#    #+#             */
/*   Updated: 2022/05/29 20:19:22 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	swap(t_stack *stack)
{
	int		i;

	i = stack->data;
	stack -> data = stack -> next -> data;
	stack -> next -> data = i;
	print_stack(stack);
}

void	rotate(t_stack *stack)
{
	t_stack	*n;
	t_stack	*temp;

	temp = stack;
	n = stack;
	stack = stack->next;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = n;
	n->next = NULL;
	print_stack(stack);
}
