/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:42:32 by tfedoren          #+#    #+#             */
/*   Updated: 2022/05/30 19:55:27 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	push(t_stack *stack1, t_stack *stack2)
{
    
}

void	pa(t_stack *stack1, t_stack *stack2)
{
	push(stack1, stack2);
	ft_printf("pa\n");
}

void	pb(t_stack *stack1, t_stack *stack2)
{
	push(stack1, stack2);
	ft_printf("pb\n");
}
