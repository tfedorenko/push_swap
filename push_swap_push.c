/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:42:32 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/12 22:00:15 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front_p(t_stack **lst, t_stack *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

void	push(t_stack **stack_1, t_stack **stack_2)
{
	t_stack	*tmp;
	tmp = *stack_2;
	// tmp = *stack;
	// if (!tmp)
	// {
	// 	*stack = new_node(data);
	// 	return ;
	// }
	// while (tmp->next != NULL)
	// 	tmp = tmp->next;
	// tmp->next = new_node(data);
	if(ft_stack_size(*stack_2) > 0)
	{
		tmp = *stack_2;
		*stack_2 = tmp->next;
		ft_lstadd_front_p(stack_1, tmp);
	}
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pa\n");
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{	
	push(stack_b, stack_a);
	ft_printf("pb\n");
}
