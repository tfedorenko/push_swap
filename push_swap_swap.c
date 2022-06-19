/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:14:00 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/12 21:19:35 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int		i;

	i = stack->data;
	stack -> data = stack -> next -> data;
	stack -> next -> data = i;
	return ;
}

void	sa(t_stack *stack)
{
	swap(stack);
	ft_printf("sa\n");
	return ;
}

void	sb(t_stack *stack)
{
	swap(stack);
	ft_printf("sb\n");
	return ;
}

void	ss(t_stack *stack1, t_stack *stack2)
{
	swap(stack1);
	swap(stack2);
	ft_printf("ss\n");
	return ;
}
