/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:10:02 by frubio-i          #+#    #+#             */
/*   Updated: 2024/10/21 13:07:35 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef FD_MAX
#  define FD_MAX 1024
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*gnl_check_static(char **str_buffer, char *new_line, int fd);
int		check_str_n(char *str_buffer);
char	*gnl_calloc_read_free(int size, int control, int fd, char *str_free);
int		gnl_strlen_n(char *str, int control);
char	*gnl_check_bf_join(char *str_buffer, int fd);
char	*gnl_str_buffer_join(char *str_buffer_join, char *str_buffer,
			char *str_read, int len_read);
char	*gnl_to_newline(char *str_buffer, int fd);
char	*gnl_str_rest(char *str_buffer, int fd);

#endif
