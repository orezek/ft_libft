/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:14:05 by orezek            #+#    #+#             */
/*   Updated: 2023/11/22 13:50:25 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

int	main (void)

{
	char	*line;
	int		fd;
	fd = open("test.txt", O_RDONLY);
	line = ft_get_next_line(fd);
	while (line)
	{
		ft_printf("%s", line);
		line = ft_get_next_line(fd);
	}
	return (0);

}
