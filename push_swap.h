/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stena-he <stena-he@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:59:33 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/20 21:44:16 by stena-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include "Libft/libft.h"

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}	t_stack;

# define INT_MAX 2147483647
# define INT_MIN -2147483648

void		ft_lstclear_push_swap(t_stack **lst);
void		print_stack_index(t_stack *head);
int			sorting(t_stack **stack_a, t_stack **stack_b);
void		indexing(t_stack **stack, int max);
int			find_max(t_stack *stack);
int			find_min(t_stack *stack);
int			ft_stack_size(t_stack *lst);
void		ft_lstadd_front_push_swap(t_stack **lst, t_stack *new);
t_stack		*ft_lstlast_push_swap(t_stack *lst);
int			check_if_sorted(t_stack **stack_a);
long int	ft_atol(char *str);
int			check_input(int n, char **input);
int			check_duplicates(int n, char **input);
int			check_integers(int n, char **input);
t_stack		*create_stack(int n, char **input);
t_stack		*new_node(int data);
int			is_empty(t_stack *root);
void		print_stack(t_stack *head);
t_stack		*push_to_stack(t_stack *root, int data);
void		rotate(t_stack **stack);
void		rotate_reverse(t_stack **stack);
void		swap(t_stack *stack);
int			pop(t_stack **root);
void		push(t_stack **stack_1, t_stack **stack_2);
void		sa(t_stack *stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack1, t_stack *stack2);
void		ra(t_stack **stack);
void		rb(t_stack **stack);
void		rr(t_stack **stack1, t_stack **stack2);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_b, t_stack **stack_a);
void		rra(t_stack **stack);
void		rrb(t_stack **stack);
void		rrr(t_stack **stack1, t_stack **stack2);
int			sort_two(t_stack **stack_a);
int			sort_three(t_stack **stack_a);
int			sort_five_new(t_stack **stack_a, t_stack **stack_bs);

#endif