/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:52:33 by cuyar             #+#    #+#             */
/*   Updated: 2024/05/17 20:11:58 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	convert_input(t_stack **stack_a, char *av)
{
	int	i;
	char	*converted;
	t_stack	*node;

	i = 0;
	converted = ft_split(av, ' ');
	while(converted[i])
	{
		node = ft_lstnew(ft_atoi(converted[i]));
		ft_lstadd_back(stack_a, node);
		i++;
	}
	i = 0;
	while(converted[i])
		free(converted[i++]);//önce parçalar freelenir
	free(converted);//sonra da dizinin kendisi freelenir
}

void	space_check(const char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(str[j])
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

void	create_stack(t_stack **stack_a, char **av)
{
	t_stack	*node;
	int		i;

	i = 1;
	while(av[i])
	{
		if (ft_strrchr(av[i], ' ') != NULL)
		{
			space_check(av[i]);
			convert_input(stack_a, av[i]);
		}
		else
		{
			node = ft_lstnew(ft_atoi(av[i]));
			ft_lstadd_back(stack_a, node);
		}
		i++;
	}
	ft_error(stack_a);
}

int	stack_size(t_stack **stack_a)
{
	t_stack	*tmp;
	int		len;
	
	tmp = *stack_a;
	len = 0;
	while(tmp)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}
