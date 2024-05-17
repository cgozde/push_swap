/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:44:48 by cuyar             #+#    #+#             */
/*   Updated: 2024/05/17 18:50:03 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_stack **stack)
{
	t_stack	*tmp;

	while ((*stack)->next)
	{
		tmp = (*stack)->next;
		while (tmp)
		{
			if((*stack)->value == tmp->value)
			{
				write(2, "Error\n", 6);
				exit(0);
			}
			stack = &(*stack)->next; //stack bir sonraki elemanın adresini tutacak şekilde güncellenir
		}
	}
}