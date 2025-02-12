/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:52:24 by frubio-i          #+#    #+#             */
/*   Updated: 2024/10/23 05:47:42 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*gnl_str_rest(char *str_buffer, int fd)
{
	char	*str_tmp;
	int		len_rest;
	int		len_nl;
	int		y;

	len_nl = gnl_strlen_n(str_buffer, 1);
	if (!str_buffer)
		return (NULL);
	len_rest = gnl_strlen_n(str_buffer, 0) - len_nl;
	if (len_rest == 0)
		return (str_buffer = gnl_calloc_read_free(0, 2, fd, str_buffer));
	str_tmp = gnl_calloc_read_free(len_rest, 0, fd, NULL);
	if (!str_tmp)
		return (NULL);
	y = 0;
	len_nl++;
	while (y < len_rest)
	{
		str_tmp[y] = str_buffer[len_nl + y];
		y++;
	}
	str_buffer = gnl_calloc_read_free(0, 2, fd, str_buffer);
	return (str_tmp);
}

char	*gnl_to_newline(char *str_buffer, int fd)
{
	char	*str_newline;
	int		i;
	int		len_nl;

	len_nl = gnl_strlen_n(str_buffer, 1) + 1;
	i = 0;
	if (!str_buffer || len_nl == 0)
		return (NULL);
	str_newline = gnl_calloc_read_free(len_nl, 0, fd, NULL);
	if (!str_newline)
		return (NULL);
	while (i < len_nl && str_buffer[i] != '\0')
	{
		str_newline[i] = str_buffer[i];
		i++;
	}
	return (str_newline);
}

char	*gnl_check_static(char **str_buffer, char *new_line, int fd)
{
	int	len;

	if (check_str_n(*str_buffer) == 1)
	{
		len = gnl_strlen_n(*str_buffer, 0);
		*str_buffer = gnl_check_bf_join(*str_buffer, fd);
		if (gnl_strlen_n(*str_buffer, 0) == 0)
			return (NULL);
		if (len == gnl_strlen_n(*str_buffer, 0))
		{
			new_line = gnl_to_newline(*str_buffer, fd);
			*str_buffer = gnl_calloc_read_free(1, 2, fd, *str_buffer);
			return (new_line);
		}
	}
	else
	{
		new_line = gnl_to_newline(*str_buffer, fd);
		*str_buffer = gnl_str_rest(*str_buffer, fd);
	}
	return (new_line);
}

char	*get_next_line(int fd)
{
	static char	*str_buffer;
	char		*new_line;

	new_line = NULL;
	if (fd < 0 || fd >= FD_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	while (1)
	{
		if (str_buffer)
		{
			new_line = gnl_check_static(&str_buffer, new_line, fd);
			if (check_str_n(new_line) == 0
				|| (check_str_n(new_line) == 1 && !str_buffer))
				return (new_line);
			if (!new_line && gnl_strlen_n(str_buffer, 0) == 0)
				return (gnl_calloc_read_free(1, 2, fd, str_buffer));
		}
		else
		{
			str_buffer = gnl_calloc_read_free(BUFFER_SIZE, 1, fd, NULL);
			if (!str_buffer)
				return (NULL);
		}
	}
}
