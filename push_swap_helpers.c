/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:04:33 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/20 20:45:31 by stena-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_node(int data)
{
	t_stack	*stack_node;

	stack_node = (t_stack *)malloc(sizeof(t_stack *));
	stack_node->data = data;
	stack_node->next = NULL;
	return (stack_node);
}

int	is_empty(t_stack *root)
{
	if (!root)
		return (1);
	return (0);
}

void	print_stack(t_stack *head)
{
	if (!head)
		return ;
	while (head->next != NULL)
	{
		ft_printf("%d ", head->data);
		head = head->next;
	}
	if (head->data)
	{
		ft_printf("%d", head->data);
	}
	ft_printf("\n");
}

void	print_stack_index(t_stack *head)
{
	if (!head)
		return ;
	while (head->next != NULL)
	{
		ft_printf("%d ", head->index);
		head = head->next;
	}
	if (head->index)
	{
		ft_printf("%d", head->index);
	}
	ft_printf("\n");
}

t_stack	*push_to_stack(t_stack *root, int data)
{
	if (!root)
	{	
		root = new_node(data);
		root->next = NULL;
	}
	else
		root->next = new_node(data);
	return (root->next);
}
