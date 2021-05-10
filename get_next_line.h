/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjimpei <yjimpei@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:33:45 by yjimpei           #+#    #+#             */
/*   Updated: 2021/05/09 14:02:45 by yjimpei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# define MAX_FD 256

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, char *src, size_t dst_size);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s);
int		get_next_line(int fd, char **line);

#endif
