/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:40:14 by cuyar             #+#    #+#             */
/*   Updated: 2024/06/02 18:42:03 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_memcpy(void	*dest, const void *src, size_t size)
{
	size_t	i;

	if (src == dest || size == 0)
		return (dest);
	i = 0;
	while (i < size)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}