/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:23:11 by tfedoren          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/30 20:08:29 by tfedoren         ###   ########.fr       */
=======
/*   Updated: 2022/05/26 21:57:34 by tfedoren         ###   ########.fr       */
>>>>>>> 7af57b4fcd67915006840ff10f5fa73f2aaadd5b
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

<<<<<<< HEAD


int	main(int argv, char **argc)
{
	int		i;	
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*ptr;

	i = 3;
	stack_a = new_node(atoi(argc[1]));
	stack_a->next = NULL;
	if (argv < 2)
		return (0);
	if (argv < 3)
	{
		ft_printf("%s\n", argc[1]);
		return (0);
	}
		ptr = push_to_stack(stack_a, ft_atoi(argc[2]));
	while (argc[i])
	{
		ptr = push_to_stack(ptr, ft_atoi(argc[i]));
		i++;
	}
	// print_stack(stack_a);

	// t_stack *n;
	// t_stack *temp;
	 
	// temp = stack;
	// n = stack;
	// stack = stack->next;
	// while (temp->next)
	// {
	// 	temp= temp->next;	/* code */
	// }
	// temp->next = n;
	// n->next = NULL;
	
	
	// print_stack(stack);

	// swap(stack_a);
	// swap(stack_a);
	// swap(stack_a);
	// swap(stack_a);
	// swap(stack_a);

	
	// print_stack(stack_a);
	// rotate(&stack_a);
	// print_stack(stack_a);
	// rotate(&stack_a);
	// print_stack(stack_a);
	// // rotate(stack_a);
	// // print_stack(stack_a);
	// // rotate(stack_a);
	// // rotate(stack_a);
	// swap(stack_a);
	// print_stack(stack_a);
	// swap(stack_a);
	// print_stack(stack_a);
	ft_printf("ra\n");
=======
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
	return (!root);
}

void	print_stack(t_stack *head)
{
	t_stack	*current_node;

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

t_stack	*push(t_stack *root, int data)
{
	root->next = new_node(data);
	return (root->next);
}

int	main(int argv, char **argc)
{
	int		i;	
	t_stack	*stack;
	t_stack	*ptr;

	i = 3;
	stack = new_node(atoi(argc[1]));
	stack->next = NULL;
	if (argv < 2)
		return (0);
	if (argv < 3)
	{
		ft_printf("%s\n", argc[1]);
		return (0);
	}
		ptr = push(stack, ft_atoi(argc[2]));
	while (argc[i])
	{
		ptr = push(ptr, ft_atoi(argc[i]));
		i++;
	}
	print_stack(stack);
>>>>>>> 7af57b4fcd67915006840ff10f5fa73f2aaadd5b
}
