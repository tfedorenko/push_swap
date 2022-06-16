/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_middlesort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:27:25 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/16 11:35:38 by stena-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast_push_swap(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void sorting_arr(int *arr, int max)
{
	int	i;
	int	temp;

	i = 0;
	while (i < max)
	{
		i++;
		if (arr[i]<arr[i - 1])
		{
			temp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = temp;
			i = 0;
		}
	}
}
int indexing(int *arr, int data, int max)
{
	int	i;
	i = 0;
	while (i < max)
	{
		if (data == arr[i])
			return (i);
		i++;
	}
	return (i);
}


int	sorting(t_stack **stack_a, t_stack **stack_b, int count)
{
	int max;
	int min;
	// int mid;
	int	count_sort_three;
	// int ind_instr;
	// int min_sort;

	max = find_max(*stack_a);
	min = find_min(*stack_a);
	ft_printf("Max: %d\n", max);
	ft_printf("Min: %d\n", min);

	while (check_if_sorted(stack_a))
	{
		while (ft_stack_size(*stack_a) > 3)
		{
			if ((*stack_a)->data != find_min(*stack_a) || \
					(*stack_a)->data != find_max(*stack_a))
			{
				pb(stack_b, stack_a);
				count++;
			}
		}

		
		//*********************************************************
		// while (ft_stack_size(*stack_a) > 3)
		// {
		// 		if((*stack_a)->data == find_min(*stack_a))
		// 		{
		// 			pb(stack_b, stack_a);
		// 			count++;
		// 		}
		// 		else
		// 		{
		// 			ra(stack_a);
		// 			count++;
		// 		}
		// }
		//*********************************************************
		while (check_if_sorted(stack_a) && stack_b != NULL)
			count_sort_three = sort_three(stack_a);
		count = count + count_sort_three;
		while (!is_empty(*stack_b))
		{
			if((*stack_b)->data) 
			{
				pa(stack_a, stack_b);
				count++;
			}
				else
			{
				rb(stack_b);
				count++;
			}
			// if ((*stack_a)->data > (*stack_b)->data)
			// {
			// 	pa(stack_a, stack_b);
			// 	count++;
			// }
			// else
			// {
			// 	rra(stack_a);
			// 	count++;
			// 	pa(stack_a, stack_b);
			// 	count++;
			// // }
			// pa(stack_a, stack_b);
			// count++;
		}
	}
	// while (!is_empty(*stack_b))
	// 	{
	// 		pa(stack_a, stack_b);
	// 		count++;
	// 	}
		ft_printf("Sorted stack 22: ");
		print_stack(*stack_a);
		ft_printf("Stack b: ");
		print_stack(*stack_b);
	return (count);
}

//100 92 40 96 59 9 60 79 87 65 35 98 83 17 14 52 78 85 71 43 15 41 82 11 88 58 81 56 -6 19 24 90 -10 47 4 26 80 27 54 48 1 13 -8 29 -1 22 74 6 12 20 73 66 68 69 37 31 34 2 30 -7 46 55 61 67 33 91 70 63 50 10 53 84 7 -4 25 32 39 38 28 64 93 21 97 76 -5 62 0 23 -9 5 72 86 57 95 44 3 18 89 42 77
