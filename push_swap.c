/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:23:11 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/01 15:20:34 by tfedoren         ###   ########.fr       */
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

	
	
	


	push(stack_a, stack_b);
	print_stack(stack_a);
	print_stack(stack_b);
}
