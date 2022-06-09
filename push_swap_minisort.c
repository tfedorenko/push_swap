/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_minisort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:08:00 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/09 15:14:45 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_minisort(t_stack **stack_a, t_stack **stack_b)
{
	while (check_if_sorted(stack_a))
	{
		if ((*stack_a)->data > (*stack_a)->next->data)
		{
			sa(*stack_a);
		}
		else
			rra(stack_a);
	}
	return ;
}
