/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:40:56 by htrindad          #+#    #+#             */
/*   Updated: 2024/06/11 16:58:35 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(char *str, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
}

size_t	ft_nwllen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i + (str[i] == '\n'));
}

char	*ft_strjoin(char *dest, char const *src)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	ptr = malloc(ft_nwllen(dest), ft_nwllen(src) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (dest[i])
	{
		ptr[i] = dest[i];
		i++;
	}
	while (src[j] && src[j] != '\n')
	{
		ptr[i + j] = dest[j];
		j++;
	}
	i += j;
	if (src[j] == '\n')
		ptr[i++] = '\n';
	ptr[i] = 0;
	free(dest);
	return (ptr);
}

int	ft_organizer(char *buffer)
{
	int	i;
	int	j;
	int	is_nwl;

	i = 0;
	j = 0;
	is_nwl = 0;
	while (buffer[i])
	{
		if (is_nwl)
			buffer[j++] = buffer[i];
		if (buffer[i] == '\n')
			is_nwl = 1;
		buffer[i++] = 0;
	}
	return (is_nwl);
}
