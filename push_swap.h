/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:59:33 by tfedoren          #+#    #+#             */
/*   Updated: 2022/06/12 19:22:44 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include "Libft/libft.h"

// typedef struct s_stack
// {
// 	int				content;
// 	struct s_stack	*next;

// }	t_list;

# define INT_MAX 2147483647
# define INT_MIN -2147483648

int			find_max(t_list *stack);
int			ft_stack_size(t_list *lst);
int			check_if_sorted(t_list **stack_a);
long int	ft_atol(char *str);
int			check_input(int n, char **input);
int			check_duplicates(int n, char **input);
int			check_integers(int n, char **input);
t_list		*create_stack(int n, char **input);
t_list		*new_node(int content);
int			is_empty(t_list *root);
void		print_stack(t_list *head);
t_list		*push_to_stack(t_list *root, int content);
void		rotate(t_list **stack);
void		rotate_reverse(t_list **stack);
void		swap(t_list *stack);
int			pop(t_list **root);
void		push(t_list **head, int content);
void		sa(t_list *stack);
void		sb(t_list *stack);
void		ss(t_list *stack1, t_list *stack2);
void		ra(t_list **stack);
void		rb(t_list **stack);
void		rr(t_list **stack1, t_list **stack2);
void		pa(t_list **stack_a, t_list **stack_b);
void		pb(t_list **stack_b, t_list **stack_a);
void		rra(t_list **stack);
void		rrb(t_list **stack);
void		rrr(t_list **stack1, t_list **stack2);
int			sort_three(t_list **stack_a);
int			sort_five_new(t_list **stack_a, t_list **stack_b, int count);

#endif