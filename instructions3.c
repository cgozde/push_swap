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
	t_stack *new_start;
	t_stack *new_end;

	if(ft_lstsize(*stack) < 2)//yığıt eleman sayısı 2'den azsa çıkar
		return ;
	new_start = ft_lstlast(*stack);//stack son elemanını new_start'e atar
	new_end = *stack;//new_end stack yığınının başını işaret eder.
	while(new_end->next->next)//sondan bir önceki eleman gelene kadar devam et
		new_end = new_end->next;
	new_end->next = NULL;//sondan bir önceki elemanın next'i null yapılarak son eleman listeden çıkarılır
	new_start->next = *stack;//new_start son elemandır next ile stack'in başına yönlendirme yapılır
	*stack = new_start; //new_start yani son eleman listenin başına atılır
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
	if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}