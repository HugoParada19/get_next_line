/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:35:54 by htrindad          #+#    #+#             */
/*   Updated: 2024/06/12 11:50:51 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdbool.h>

size_t	ft_strlen(char const *str);
char	*ft_strjoin(char *dest, char const *src);
bool	check_and_clear(char *buf);
char	*free_mem(char *mem);
char	*get_next_line(int fd);

#endif
