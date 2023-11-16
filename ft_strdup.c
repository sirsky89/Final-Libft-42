/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-zub <abin-zub@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:04:10 by abin-zub          #+#    #+#             */
/*   Updated: 2023/10/24 16:14:27 by abin-zub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	length;
	char	*duplicate;

	length = ft_strlen(s1);
	duplicate = malloc(length + 1);
	i = 0;
	if (duplicate != NULL)
	{
		while (s1[i])
		{
			duplicate[i] = s1[i];
			i++;
		}
		duplicate[i] = '\0';
	}
	return (duplicate);
}
