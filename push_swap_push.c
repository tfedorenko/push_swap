/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:42:32 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/20 20:05:16 by stena-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front_push_swap(t_stack **lst, t_stack *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

void	push(t_stack **stack_1, t_stack **stack_2)
{
	t_stack	*tmp;

	if (ft_stack_size(*stack_2) > 0)
	{
		tmp = *stack_2;
		*stack_2 = tmp->next;
		ft_lstadd_front_push_swap(stack_1, tmp);
	}
}

void	pa(t_stack **stack_1, t_stack **stack_2)
{
	push(stack_1, stack_2);
	ft_printf("pa\n");
}

void	pb(t_stack **stack_1, t_stack **stack_2)
{	
	push(stack_1, stack_2);
	ft_printf("pb\n");
}
