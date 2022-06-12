/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_middlesort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:27:25 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/12 23:01:56 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorting(t_stack **stack_a, t_stack **stack_b, int count)
{
	int	count_sort_three;

	while (check_if_sorted(stack_a))
	{
		while (ft_stack_size(*stack_a) > 3)
		{
			pb(stack_b, stack_a);
			count++;
		}
		while (check_if_sorted(stack_a) && stack_b != NULL)
			count_sort_three = sort_three(stack_a);
		count = count + count_sort_three;
	}
			ft_printf("Sorted stack 22: ");
		print_stack(*stack_a);
		ft_printf("Stack b: ");
		print_stack(*stack_b);
	return (count);
}
