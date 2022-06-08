/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_minisort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:35:39 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/08 23:35:39 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap_minisort(t_stack **stack_a, t_stack **stack_b)
{
    //
    if((stack_a->data)>stack_a->next->data)
        sa(stack_a);
    else
        rra(stack_a);
}      
