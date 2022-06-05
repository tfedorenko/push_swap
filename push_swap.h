/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:59:33 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/05 19:04:44 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "Libft/libft.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;

}	t_stack;

t_stack	*create_stack(int n, char **input);
t_stack	*new_node(int data);
int		is_empty(t_stack *root);
void	print_stack(t_stack *head);
t_stack	*push_to_stack(t_stack *root, int data);
void	rotate(t_stack **stack);
void	rotate_reverse(t_stack **stack);
void	swap(t_stack *stack);
int		pop(t_stack **root);
void	push(t_stack **head, int data);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack1, t_stack *stack2);
void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rr(t_stack **stack1, t_stack **stack2);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);
void	rrr(t_stack **stack1, t_stack **stack2);

#endif