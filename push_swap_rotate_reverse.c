/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rotate_reverse.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:05:12 by tfedoren          #+#    #+#             */
/*   Updated: 2022/05/30 20:06:10 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"
#include <stdio.h>

void rotate_reverse(t_stack **stack)
{
    
}

void	rra(t_stack **stack)
{
	rotate(stack);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack)
{
	rotate(stack);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack1, t_stack **stack2)
{
	rotate(stack1);
	rotate(stack2);
	ft_printf("rrr\n");
}
