/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:04:08 by frubio-i          #+#    #+#             */
/*   Updated: 2024/10/23 05:46:53 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*gnl_calloc_read_free(int size, int control, int fd, char *str_free)
{
	int		i;
	char	*str;
	int		len_read;

	i = 0;
	if (control == 2)
	{
		free(str_free);
		str_free = NULL;
		return (NULL);
	}
	str = (char *)malloc(size + 1 * sizeof(char));
	if (!str)
		return (NULL);
	while (i <= size)
		str[i++] = '\0';
	if (control == 1)
	{
		len_read = read(fd, str, BUFFER_SIZE);
		if (len_read == 0 || len_read == -1)
			return (gnl_calloc_read_free(BUFFER_SIZE, 2, 1, str));
	}
	return (str);
}

char	*gnl_str_buffer_join(char *str_buffer_join, char *str_buffer,
		char *str_read, int len_read)
{
	int	len_buffer;
	int	i;

	i = 0;
	len_buffer = gnl_strlen_n(str_buffer, 0);
	while (i < len_buffer)
	{
		str_buffer_join[i] = str_buffer[i];
		i++;
	}
	i = 0;
	while (i < len_read)
	{
		str_buffer_join[len_buffer + i] = str_read[i];
		i++;
	}
	free(str_read);
	str_read = NULL;
	str_buffer = gnl_calloc_read_free(BUFFER_SIZE, 2, 1, str_buffer);
	return (str_buffer_join);
}

char	*gnl_check_bf_join(char *str_buffer, int fd)
{
	char	*str_buffer_join;
	char	*str_read;
	int		len_buffer;
	int		len_read;

	if (!str_buffer)
		len_buffer = 0;
	else
		len_buffer = gnl_strlen_n(str_buffer, 0);
	str_read = gnl_calloc_read_free(BUFFER_SIZE, 1, fd, NULL);
	len_read = gnl_strlen_n(str_read, 0);
	if (len_buffer == len_buffer + len_read || len_read == 0)
	{
		free(str_read);
		return (str_buffer);
	}
	if (len_buffer + len_read != 0)
		str_buffer_join = gnl_calloc_read_free(len_buffer + len_read,
				0, fd, NULL);
	else
		return (str_buffer = gnl_calloc_read_free(1, 2, fd, str_buffer));
	str_buffer_join = gnl_str_buffer_join(str_buffer_join,
			str_buffer, str_read, len_read);
	return (str_buffer_join);
}

int	gnl_strlen_n(char *str, int control)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (control == 1)
			if (str[i] == '\n')
				return (i);
		i++;
	}
	return (i);
}

int	check_str_n(char *str_buffer)
{
	int	len_buffer;
	int	len_nl;

	len_buffer = gnl_strlen_n(str_buffer, 0);
	len_nl = gnl_strlen_n(str_buffer, 1);
	if (len_nl == len_buffer)
		return (1);
	return (0);
}
