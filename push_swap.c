/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 15:59:46 by cuyar             #+#    #+#             */
/*   Updated: 2024/06/02 16:20:47 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	space_check(const char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if (str[j] == ' ')
		{
			i++;
		}
		j++;
	}
	if (j == i)
		exit(0);
}

int	main(int ac, char **av)
{
	t_stack	**stack_a;
	t_stack	**stack_b;
	int		len;
	int		sorted_or_n;

	if (ac < 2)
		return (0);
	stack_a = (t_stack **)malloc(sizeof(t_stack *));
	stack_b = (t_stack **)malloc(sizeof(t_stack *));
	*stack_a = NULL;
	*stack_b = NULL;
	create_stack(stack_a, av);
	sorted_or_n = is_sorted(stack_a);
	if (sorted_or_n)
		return (0);
	set_neg(stack_a);
	len = stack_size(stack_a);
	select_sort(stack_a, stack_b, len);
	return (0);
}
