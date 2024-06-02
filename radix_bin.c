/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_bin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:24:31 by cuyar             #+#    #+#             */
/*   Updated: 2024/06/02 16:33:28 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_min2(t_stack **stack_a)
{
	t_stack	*temp;
	t_stack	*min;
	int		x;

	x = 0;
	temp = *stack_a;
	min = NULL;
	while (temp)
	{
		if((!x || temp->value < min->value) && (temp->index == -1))
		{
			x = 1;
			min = temp;
		}
		temp = temp->next;
	}
	return (min);
}

void	index_setter(t_stack **stack_a)
{
	t_stack	*min;
	int 	i;

	min = find_min2(stack_a);
	i = 0;
	while (min)
	{
		min->index = i;
		i++;
		min = find_min2(stack_a);
	}
}

void	radix_bin(t_stack **stack_a, t_stack **stack_b)
{
	int	push;
	int	len;

	push = 0;
	index_setter(stack_a);
	while(!is_sorted(stack_a))
	{
		len = ft_lstsize(*stack_a);
		while (len)
		{
			if((((*stack_a)->index >> push) & 1) == 0)
				pb(stack_b, stack_a);
			else
				ra(stack_a);
			len--;
		}
		push++;
		while(*stack_b)
			pa(stack_a, stack_b);
	}
}