/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:23:11 by tfedoren          #+#    #+#             */
/*   Updated: 2022/05/25 20:25:42 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	main(int argv, char *argc)
{
	t_stack	*a;
	t_stack	*c;
	int		i;

	a = malloc (sizeof(*a));
	a->num = ft_atoi(argv);
	a->next = NULL;
	c = a->next;
	a->next = c;
	c = c->next;

}
