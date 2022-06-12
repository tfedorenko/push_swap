/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:14:00 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/12 19:22:35 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *stack)
{
	int		i;

	i = stack->content;
	stack -> content = stack -> next -> content;
	stack -> next -> content = i;
}

void	sa(t_list *stack)
{
	swap(stack);
	ft_printf("sa\n");
}

void	sb(t_list *stack)
{
	swap(stack);
	ft_printf("sb\n");
}

void	ss(t_list *stack1, t_list *stack2)
{
	swap(stack1);
	swap(stack2);
	ft_printf("ss\n");
}
