/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-zub <abin-zub@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:02:22 by abin-zub          #+#    #+#             */
/*   Updated: 2023/10/24 15:54:57 by abin-zub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*dst;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	if (size != 0)
	{
		if (count >= SIZE_MAX / size)
			return (NULL);
	}
	total_size = count * size;
	dst = malloc(total_size);
	if (dst)
	{
		ft_memset(dst, 0, total_size);
		return (dst);
	}
	else
	{
		free(dst);
		return (NULL);
	}
}
