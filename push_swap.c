/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:23:11 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/13 13:00:13 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(int n, char **input)
{
	int		i;	
	t_stack	*stack;
	t_stack	*ptr;

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
	t_stack	*stack_b;
	int     count;

	count = 0;
	if (check_input(argv, argc) == -1 || argv - 1 < 3)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	stack_a = create_stack(argv, argc);
	// if (check_if_sorted(&stack_a) == 0)
	// 	return(0);
		ft_printf("Stack a2: ");
		 print_stack(stack_a);
		 ft_printf("\n");
		 ft_printf("Stack b2: ");
		 print_stack(stack_b);
		  ft_printf("\n");
	if (argv - 1 == 3)
	{
		count = sort_three(&stack_a);
	}

	if (3 < argv - 1 && argv - 1 <= 5)
	{
		count = sort_five_new(&stack_a, &stack_b, count);
	}
	
	if (5 < argv - 1)
	{
		ft_printf("Stack a5: ");
		 print_stack(stack_a);
		 ft_printf("\n");
		 ft_printf("Stack b5: ");
		 print_stack(stack_b);
		  ft_printf("\n");
		indexing(&stack_a, argv - 2);
		ft_printf("Stack a6: ");
		 print_stack(stack_a);
		 ft_printf("\n");
		 ft_printf("Stack b6: ");
		 print_stack(stack_b);
		  ft_printf("\n");
		count = sorting(&stack_a, &stack_b);

	}
	
	ft_printf("Sorted stack: ");
	print_stack(stack_a);
	ft_printf("count = %d\n", count);
	// pa(&stack_a, &stack_b);
	// ft_printf("Sorted stack after microsort2: ");
	// 	print_stack(stack_a);
	// 	ft_printf("Stack b2: ");
	// 	print_stack(stack_b);
	
	return (0);
}
