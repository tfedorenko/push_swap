/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_middlesort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:27:25 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/16 12:09:06 by stena-he         ###   ########.fr       */
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

void	sorting_array_of_ints(int *arr, int max)
{
	int	i;
	int	temp;

	i = 0;
	while (i < max)
	{
		i++;
		if (arr[i] < arr[i - 1])
		{
			temp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = temp;
			i = 0;
		}
	}
}

int	indexing_helper(int *arr, int data, int max)
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

void	indexing(t_stack **stack, int max)
{
	t_stack	*temp;
	int		*temp_int;
	int		*arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(int) * max);
	temp = *stack;
	while (temp)
	{
		arr[i] = temp->data;
		i++;
		temp = temp->next;
	}
	sorting_array_of_ints(arr, max);
	temp = *stack;
	while(temp)
	{
		temp_int = &(temp->data);
		*temp_int = indexing_helper(arr, temp->data, max);
		temp = temp->next;
	}
	free(arr);
}

int	sorting(t_stack **stack_a, t_stack **stack_b)
{
	int max_bits;
	int i;
	int	count;
	int j;
	int size;

	count = 0;
	//j=0;
	size = ft_stack_size(*stack_a);
	max_bits = 0;
	i = 0;

	//j = 0;
	while (((ft_stack_size(*stack_a) -1) >> max_bits) != 0)
		++max_bits;
//	ft_printf("max_bits %d\n", max_bits);

	while (i < max_bits && check_if_sorted(stack_a))
	//while (i < max_bits && check_if_sorted(stack_a))
	{
				//ft_printf("i3 %d\n", i);
			j = 0;
		while(j < size)
		{
			//ft_printf("i2 %d\n", i);
			//ft_printf("j %d\n", j);
			//ft_printf("((*stack_a)->data) %d\n", ((*stack_a)->data));
			if (((((*stack_a)->data) >> i) & 1) == 1)
			{
				ra(stack_a);
				count++;
			}
			else 
			{
				pb(stack_b, stack_a);				
				count++;
			}

			j++;
			//ft_printf("j %d\n", j);
		}
	
		//j = 0;
		while (!is_empty(*stack_b))
		{
			pa(stack_a, stack_b);
			count++;
		}
		i++;
		
		/*ft_printf("i %d\n", i);
		ft_printf("Stack a: ");
		print_stack(*stack_a);
		ft_printf("\n");
		ft_printf("Stack b: ");
		print_stack(*stack_b);
		ft_printf("\n");*/
	}
	return (count);
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
//100 92 40 96 59 9 60 79 87 65 35 98 83 17 14 52 78 85 71 43 15 41 82 11 88 58 81 56 -6 19 24 90 -10 47 4 26 80 27 54 48 1 13 -8 29 -1 22 74 6 12 20 73 66 68 69 37 31 34 2 30 -7 46 55 61 67 33 91 70 63 50 10 53 84 7 -4 25 32 39 38 28 64 93 21 97 76 -5 62 0 23 -9 5 72 86 57 95 44 3 18 89 42 77
