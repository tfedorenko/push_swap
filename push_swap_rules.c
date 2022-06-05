/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:04:33 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/05 15:46:41 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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
	t_stack	*current_node;

	if (!head)
		return ;
	while (head->next != NULL)
	{
		ft_printf("%d\n", head->data);
		head = head->next;
	}
	if (head->data)
	{
		ft_printf("%d", head->data);
	}
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

int	pop(t_stack **root)
{
	t_stack	*temp;
	int		popped;

	if (is_empty((*root)) == 1)
	{
		return (0);
	}
	temp = *root;
	popped = temp->data;
	*root = (*root)->next;
	free(temp);
	return (popped);
}
