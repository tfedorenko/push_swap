/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:23:11 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/10 20:00:21 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	t_stack	*stack_b;

	if (check_input(argv, argc) == -1 || argv - 1 < 3 )
		return (0);
	// if (check_input(argv, argc) == -1)
		// return (0);
	stack_a = create_stack(argv, argc);
	// printf("argv - 1 = %d\n", argv - 1);


	if (argv - 1 == 3)
		push_swap_microsort(&stack_a, &stack_b);
	if ( 3 < argv - 1 && argv - 1 <= 5)
		push_swap_minisort(&stack_a, &stack_b);
	// int max;
	// max = find_max(stack_a);
	// printf("max %d\n", max);
	ft_printf("Sorted stack: ");
	print_stack(stack_a);
	// print_stack(stack_b);
	// return (0);
}
