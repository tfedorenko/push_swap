/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:23:11 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/05 21:06:07 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int check_duplicates (int n, char **input)
{
	int i;
	int j;
	int *ptr;
	i=1;
	
	while (i<n)
	{
		ptr[i] = ft_atoi(input[i]);
		
		j=2;
		while (j < n)
		{
			if(ptr[i] == ptr[j])
			{
				ft_printf("Error: duplicat");
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
	
}

int	check_input(int n, char **input)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (input[i][j])
		{
			
			if (!ft_isdigit(input[i][j]))
			{
				ft_printf("Error: invalid input\n");
				return (-1);
			}
			j++;
			k = 2;
			
			// printf("I'm here, i: %d\n", i);
			// printf("I'm here, k: %d\n", k);
		}
		// while (k < n && i < n - 1)
		// 	{
		// 		// printf("I'm here, i: %d\n", i);
		// 		// printf("I'm here, k: %d\n", k);
		// 		if (!(input[i][j] == input[k]))
		// 		{
		// 			printf("I'm here, i: %d\n", i);
		// printf("I'm here, k: %d\n", k);
		// 			// printf("I'm here, i: %d\n", i);
		// 			// printf("I'm here, k: %d\n", k);
		// 				// printf("I'm here: %d\n", input[i][j]);
		// 			// ft_printf("Error: duplicates\n");
		// 			return (0);
		// 		}	
		// 		else
		// 		{
		// 			ft_printf("Error: duplicates\n");
		// 			return (-1);
		// 		}
		// 		// printf("I'm here: %d\n", j);
		// 		// printf("I'm here, input[i][j]: %d\n", input[i][j]);
		// 		// printf("I'm here: %d\n", k);
		// 		// printf("I'm here, input[i][k]: %d\n", input[i][k]);
		// 	 k ++;
			
		// 	}
		i++;
		// k = i + 1;
		// printf("I'm here, i: %d\n", i);
		// printf("I'm here, k: %d\n", k);
	}
	return (0);
}

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
		return 0;
	stack_a = create_stack(argv, argc);
	// int		i;	
	// t_stack	*stack_a;
	// t_stack	*stack_b;
	// t_stack	*ptr;
	// t_stack	*ptr_b;

	// i = 3;
	// stack_a = new_node(atoi(argc[1]));
	// stack_a->next = NULL;
	// if (argv < 2)
	// 	return (0);
	// if (argv < 3)
	// {
	// 	ft_printf("%s\n", argc[1]);
	// 	return (0);
	// }
	// 	ptr = push_to_stack(stack_a, ft_atoi(argc[2]));
	// while (argc[i])
	// {
	// 	ptr = push_to_stack(ptr, ft_atoi(argc[i]));
	// 	i++;
	// }
	// rotate_reverse(&stack_a);
	print_stack(stack_a);
	// printf("\n");
	// printf("Stack a thingy\n");
	// rotate_reverse(&stack_a);
	// print_stack(stack_a);
	// printf("\n");
	// printf("Stack a thingy\n");
	// rotate_reverse(&stack_a);
	// print_stack(stack_a);
	// printf("\n");
	// printf("Stack a thingy\n");
	// rotate_reverse(&stack_a);
	// print_stack(stack_a);
}
