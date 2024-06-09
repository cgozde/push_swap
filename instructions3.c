/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:05:14 by cuyar             #+#    #+#             */
/*   Updated: 2024/05/17 19:14:02 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*new_start;
	t_stack	*new_end;

	if (ft_lstsize(*stack) < 2)
		return ;
	new_start = ft_lstlast(*stack);
	new_end = *stack;
	while (new_end->next->next)
		new_end = new_end->next;
	new_end->next = NULL;
	new_start->next = *stack;
	*stack = new_start;
}

void	rra(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) < 2 && ft_lstsize(*stack_b) < 2)
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
