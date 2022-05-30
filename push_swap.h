/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:59:33 by tfedoren          #+#    #+#             */
/*   Updated: 2022/05/30 20:16:27 by tfedoren         ###   ########.fr       */
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
//Siemanko
t_stack	*new_node(int data);
int		is_empty(t_stack *root);
void	print_stack(t_stack *head);
t_stack	*push_to_stack(t_stack *root, int data);
void	rotate(t_stack **stack);
void	swap(t_stack *stack);

#endif