/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_microsort.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:35:39 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/09 15:53:42 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_size(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		if (lst->next)
			lst = lst->next;
		else
			break ;
	}
	return (i);
}

int	check_if_sorted(t_stack **stack_a)
{
	t_stack	*temp;
	int		stack_size;
	int		i;
	int		temp_elem;

	i = 0;
	stack_size = ft_stack_size(*stack_a);
	temp = *stack_a;
	temp_elem = temp->data;
	temp = temp -> next;
	while (i < stack_size && temp)
	{
		if (temp_elem > temp->data)
			return (-1);
		temp_elem = temp->data;
		temp = temp->next;
		i++;
	}
	return (0);
}

// suppose to sort only 3 elemets
void	push_swap_microsort(t_stack **stack_a, t_stack **stack_b)
{
	int		element1;
	int		element2;
	int		element3;
	t_stack	*temp;
	
	while (check_if_sorted(stack_a))
	{
		temp = *stack_a;
		element1 = (temp)->data;
		element2 = (temp)->next->data;
		element3 = (temp)->next->next->data;
		temp = temp ->next;
		// printf("element1 = %d\n", element1);
		// printf("element2 = %d\n", element2);
		// printf("element3 = %d\n", element3);
		if (element1 > element2 && element1 > element3 && element3 > element2)
		{
			ra(stack_a);
			return ;
		}
		if ((*stack_a)->data > (*stack_a)->next->data)
			sa(*stack_a);
		else
			rra(stack_a);
	}
	return ;
}
//  1 2 3
//  1 3 2
//  2 1 3
//  2 3 1
//  3 1 2
//  3 2 1
