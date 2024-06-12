/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:35:18 by htrindad          #+#    #+#             */
/*   Updated: 2024/06/12 11:38:55 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char const *str)
{
	size_t	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	i += str[i] == '\n';
	return (i);
}

char	*ft_strjoin(char *dest, char const *src)
{
	char	*str;
	int		i;
	int		j;

	if (!dest || !src)
		return (NULL);
	str = malloc(ft_strlen(dest) + ft_strlen(src) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (dest[i])
	{
		str[i] = dest[i];
		i++;
	}
	while (src[j] && src[j] != '\n')
		str[i++] = src[j++];
	if (src[j] == '\n')
		str[i++] = '\n';
	str[i] = 0;
	free(dest);
	return (str);
}

bool	check_and_clear(char *buf)
{
	int		i;
	int		j;
	bool	flag;

	if (buf == NULL)
		return (NULL);
	i = 0;
	j = 0;
	flag = false;
	while (buf[i])
	{
		if (flag)
			buf[j++] = buf[i];
		if (buf[i] == '\n')
			flag = true;
		buf[i++] = 0;
	}
	return (flag);
}

char	*free_mem(char *mem)
{
	free(mem);
	return (NULL);
}
