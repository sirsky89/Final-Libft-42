/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-zub <abin-zub@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:21:40 by abin-zub          #+#    #+#             */
/*   Updated: 2023/10/29 13:21:52 by abin-zub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_word_count(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

static	char	*ft_extract_word(const char *str, char c)
{
	size_t	count;
	size_t	i;
	char	*new_str;

	count = 0;
	i = 0;
	while (str[count] && str[count] != c)
		count++;
	new_str = (char *)malloc(sizeof(char) * (count + 1));
	if (new_str == NULL)
		return (0);
	ft_strlcpy(new_str, str, count + 1);
	return (new_str);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	total_word;
	char	**ptr;
	char	*str;

	if (s == NULL)
		return (0);
	str = (char *)s;
	total_word = ft_word_count(str, c);
	ptr = (char **)malloc(sizeof(char *) * (total_word + 1));
	if (ptr == NULL)
		return (0);
	i = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
			ptr[i++] = ft_extract_word(str, c);
		while (*str && *str != c)
			str++;
	}
	ptr[i] = NULL;
	return (ptr);
}
