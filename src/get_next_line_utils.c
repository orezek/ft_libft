/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:24:23 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/21 11:30:21 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	gnl_ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (*str++)
		i++;
	return (i);
}

int	ft_find_newline_position(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == '\n')
			return (i);
		i++;
		str++;
	}
	return (-1);
}

void	*gnl_ft_memmove(void *to, const void *from, size_t size)
{
	unsigned char		*des;
	const unsigned char	*src;

	des = to;
	src = from;
	if (des < src)
	{
		while (size--)
			*(des++) = *(src++);
	}
	else if (des > src)
	{
		des += size;
		src += size;
		while (size--)
			*--des = *--src;
	}
	return (to);
}

char	*gnl_ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_extract_line_and_movebytes(char *buf)
{
	char	*newline;
	int		nl_pos;

	nl_pos = ft_find_newline_position(buf);
	if (nl_pos >= 0)
	{
		newline = malloc(sizeof(char) * (nl_pos + 2));
		newline = gnl_ft_strncpy(newline, buf, nl_pos + 1);
		newline[nl_pos + 1] = '\0';
		buf = gnl_ft_memmove(buf, buf + nl_pos + 1, gnl_ft_strlen(buf) - nl_pos);
		return (newline);
	}
	return (NULL);
}
