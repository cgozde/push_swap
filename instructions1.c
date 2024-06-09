/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:07:12 by cuyar             #+#    #+#             */
/*   Updated: 2024/05/17 19:11:14 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	if (ft_lstsize(*src) == 0)
		return ;
	tmp = *src;
	*src = (*src)->next;
	ft_lstadd_front(dst, tmp);
}

void	pa(t_stack **dst_a, t_stack **src_b)
{
	push(src_b, dst_a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **dst_b, t_stack **src_a)
{
	push(src_a, dst_b);
	write(1, "pb\n", 3);
}
