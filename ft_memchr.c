/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-zub <abin-zub@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:59:55 by abin-zub          #+#    #+#             */
/*   Updated: 2023/10/23 17:13:34 by abin-zub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	char		uc;

	p = s;
	uc = (char)c;
	while (n--)
	{
		if (*p == uc)
		{
			return ((void *)p);
		}
		p++;
	}
	return ((void *)0);
}
