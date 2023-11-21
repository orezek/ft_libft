/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:38:06 by orezek            #+#    #+#             */
/*   Updated: 2023/11/01 16:10:00 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int					str_len;
	unsigned int		index;
	char				*ptr;

	str_len = ft_strlen(s);
	index = 0;
	ptr = malloc((str_len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (*s)
		*ptr++ = f(index++, *s++);
	*ptr = '\0';
	return (ptr - str_len);
}
