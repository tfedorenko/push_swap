/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:23:11 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/01 20:56:06 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argv, char **argc)
{
	int		i;	
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*ptr;
	t_stack	*ptr_b;

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

	
	
	

	printf("\n");
	pb(&stack_b, &stack_a);
	printf("Stack a thingy\n");
	print_stack(stack_a);
	printf("\n");
	printf("Stack b thingy\n");
	print_stack(stack_b);
	printf("\n");
	pb(&stack_b, &stack_a);
	printf("Stack a thingy\n");
	print_stack(stack_a);
	printf("\n");
	printf("Stack b thingy\n");
	print_stack(stack_b);

//  sa(stack_a);
//  ra(&stack_a);

}
