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
	t_stack *tmp;

	if(ft_lstsize(*src) == 0)//kaynak yığının boyutu 0 ise fonksiyondan çık
		return ;
	tmp = *src; //ilk elemanı tmp'ye ata
	*src = (*src)->next; //kaynağın ikinci elemanı ilk eleman olarak güncellenir
	ft_lstadd_front(dst, tmp);//tmpdeki elemanı dst'nin başına ekler
}

void	pa(t_stack **src_b, t_stack **dst_a)
{
	push(src_b, dst_a);
	write(1, "pa\n",3);
}

void	pb(t_stack **src_a, t_stack **dst_b)
{
	push(src_a, dst_b);
	write(1, "pb\n", 3);
}