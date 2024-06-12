/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:55:43 by htrindad          #+#    #+#             */
/*   Updated: 2024/06/12 13:07:09 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	line[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*buff;
	int			chars_r;

	if (fd < 0 || fd > 7 || BUFFER_SIZE < 1)
		return (NULL);
	buff = malloc(1);
	if (buff == NULL)
		return (NULL);
	buff[0] = 0;
	buff = ft_strjoin(buff, line[fd]);
	if (check_and_clear(line[fd]))
		return (buff);
	chars_r = read(fd, line[fd], BUFFER_SIZE);
	if (chars_r < 1 && (!*buff))
		return (free_mem(buff));
	while (chars_r > 0)
	{
		line[fd][chars_r] = 0;
		buff = ft_strjoin(buff, line[fd]);
		if (check_and_clear(line[fd]))
			break ;
		chars_r = read(fd, line[fd], BUFFER_SIZE);
	}
	return (buff);
}
/*
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd[2];
	char *str;
	const int times = 4;

	fd[0] = open("test.txt", O_RDONLY);
	fd[1] = open("test2.txt", O_RDONLY);
	for (int i = 0; i < times; i++)
	{
		printf("%s\n", str = get_next_line(fd[0]));
		free(str);
	}
	for (int i = 0; i < times; i++)
	{
		printf("%s\n", str = get_next_line(fd[1]));
		free(str);
	}
}
*/
