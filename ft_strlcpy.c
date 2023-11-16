/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-zub <abin-zub@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:28:00 by abin-zub          #+#    #+#             */
/*   Updated: 2023/10/23 15:16:52 by abin-zub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	copied;

	copied = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (copied < n - 1 && src[copied] != '\0')
	{
		dst[copied] = src[copied];
		copied++;
	}
	dst[copied] = '\0';
	while (src[copied] != '\0')
		copied++;
	return (copied);
}
