/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-zub <abin-zub@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:54:38 by abin-zub          #+#    #+#             */
/*   Updated: 2023/10/23 17:35:05 by abin-zub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;

	if ((!dst || !src) && !n)
		return (0);
	i = ft_strlen(dst);
	if (n < i)
	{
		return (n + ft_strlen(src));
	}
	while (*src && i + 1 < n)
	{
		dst[i++] = *(src++);
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
