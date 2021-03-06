/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:04:33 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/19 23:26:45 by tfedoren         ###   ########.fr       */
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
