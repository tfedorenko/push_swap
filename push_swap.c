/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:23:11 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/07 17:12:19 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_stack	*create_stack(int n, char **input)
{
	int		i;	
	t_stack	*stack;
	t_stack	*ptr;
	t_stack	*ptr_b;

	i = 3;
	stack = new_node(atoi(input[1]));
	stack->next = NULL;
	if (n < 2)
		return (0);
	if (n < 3)
	{
		ft_printf("%s\n", input[1]);
		return (0);
	}
		ptr = push_to_stack(stack, ft_atoi(input[2]));
	while (input[i])
	{
		ptr = push_to_stack(ptr, ft_atoi(input[i]));
		i++;
	}
	return (stack);
}

int	main(int argv, char **argc)
{
	t_stack	*stack_a;

	if (check_input(argv, argc) == -1)
		return (0);
	
	stack_a = create_stack(argv, argc);
	// int		i;	
	// t_stack	*stack_a;
	// t_stack	*stack_b;
	// t_stack	*ptr;
	// t_stack	*ptr_b;


	print_stack(stack_a);
}
