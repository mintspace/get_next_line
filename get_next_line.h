/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbubnov <dbubnov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 12:26:51 by dbubnov           #+#    #+#             */
/*   Updated: 2019/06/03 13:08:19 by dbubnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1000000

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "libft/libft.h"

typedef struct		s_array
{
	int				fd_counter;
	char			*left_over_str;
	struct s_array	*next;
}					t_array;

t_array				*list_create(const int fd);
int					ft_read(int fd, char *buff, char **str, char *left_over);
char				*ft_check(char *str, char *left_over, char *buff, int *t);
int					get_line(const int fd, char **line, char *left_over);
int					get_next_line(const int fd, char **line);

#endif
