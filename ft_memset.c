/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-zub <abin-zub@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:23:04 by abin-zub          #+#    #+#             */
/*   Updated: 2023/10/21 16:49:38 by abin-zub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*source;

	source = b;
	while (len > 0)
	{
		source[len - 1] = (unsigned char)c;
		len--;
	}
	return (b);
}
