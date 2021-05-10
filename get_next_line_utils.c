/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjimpei <yjimpei@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:33:16 by yjimpei           #+#    #+#             */
/*   Updated: 2021/05/09 13:33:58 by yjimpei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

size_t	ft_strlcpy(char *dest, char *src, size_t dst_size)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	i = 0;
	while (dst_size != 0 && src[i] && i < dst_size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (dst_size != 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)s, ft_strlen(s) + 1);
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	size;
	char	*p_str;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	size = ft_strlen(s1) + ft_strlen(s2);
	p_str = (char *)malloc(sizeof(char) * (size + 1));
	if (!p_str)
		return (NULL);
	ft_strlcpy(p_str, s1, ft_strlen(s1) + 1);
	ft_strlcpy(p_str + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	free(s1);
	return (p_str);
}
