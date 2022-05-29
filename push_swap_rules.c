/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:04:33 by tfedoren          #+#    #+#             */
/*   Updated: 2022/05/29 17:05:48 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	swap(t_stack *stack)
{
	int		i;
	t_stack	*temp;

	temp = stack;
	i = temp->data;
	temp -> data = temp -> next -> data;
	temp -> next -> data = i;
	print_stack(temp);
}


void	rotate(t_stack *stack)
{
	
}
