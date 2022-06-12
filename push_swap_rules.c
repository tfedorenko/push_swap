/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:04:33 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/12 19:22:25 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*new_node(int content)
{
	t_list	*stack_node;

	stack_node = (t_list *)malloc(sizeof(t_list *));
	stack_node->content = content;
	stack_node->next = NULL;
	return (stack_node);
}

int	is_empty(t_list *root)
{
	if (!root)
		return (1);
	return (0);
}

void	print_stack(t_list *head)
{
	// t_list	*current_node;

	if (!head)
		return ;
	while (head->next != NULL)
	{
		ft_printf("%d ", head->content);
		head = head->next;
	}
	if (head->content)
	{
		ft_printf("%d", head->content);
	}
	ft_printf("\n");
}

t_list	*push_to_stack(t_list *root, int content)
{
	if (!root)
	{	
		root = new_node(content);
		root->next = NULL;
	}
	else
		root->next = new_node(content);
	return (root->next);
}

int	pop(t_list **root)
{
	t_list	*temp;
	int		popped;

	if (is_empty((*root)) == 1)
	{
		return (0);
	}
	temp = *root;
	popped = temp->content;
	*root = (*root)->next;
	free(temp);
	return (popped);
}
