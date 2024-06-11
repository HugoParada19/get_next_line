/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:04:06 by htrindad          #+#    #+#             */
/*   Updated: 2024/06/11 17:35:24 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(char const *str);
char	*ft_strjoin(char *dest, char const *src);
int		check_and_clear(char *line);
char	*free_gnl(char *gnl);
char	*get_next_line(int fd);

#endif
