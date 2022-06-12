/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_microsort.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:35:39 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/12 19:21:53 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_size(t_list *lst)
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

int	check_if_sorted(t_list **stack_a)
{
	t_list	*temp;
	int		stack_size;
	int		i;
	int		temp_elem;

	i = 0;
	stack_size = ft_stack_size(*stack_a);
	temp = *stack_a;
	temp_elem = temp->content;
	temp = temp -> next;
	while (i < stack_size && temp)
	{
		if (temp_elem > temp->content)
			return (-1);
		temp_elem = temp->content;
		temp = temp->next;
		i++;
	}
	return (0);
}

// suppose to sort only 3 elemets
int	sort_three(t_list **stack_a)
{
	int		element1;
	int		element2;
	int		element3;
	int		count;
	t_list	*temp;
	
	count = 0;
	while (check_if_sorted(stack_a))
	{
		temp = *stack_a;
		element1 = (temp)->content;
		element2 = (temp)->next->content;
		element3 = (temp)->next->next->content;
		temp = temp ->next;
		if (element1 > element2 && element1 > element3 && element3 > element2)
		{
			ra(stack_a);
			count++;
			return (count);
		}
		if ((*stack_a)->content > (*stack_a)->next->content)
		{
			sa(*stack_a);
			count++;
		}

		else
		{
			rra(stack_a);
			count++;
		}
	}
	return (count);
}
//  1 2 3
//  1 3 2
//  2 1 3
//  2 3 1
//  3 1 2
//  3 2 1

// 1 4 2
// 2 4 1
// 4 2 1
// /
// 2 1 3 4
// 2 3 1 4
// 2 4 1 3
// 3 2 1 4