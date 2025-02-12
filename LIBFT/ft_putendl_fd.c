/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:59:04 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 13:46:13 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	if (s[i] == '\0')
		write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	s[] = "Acho";
	int		fd;

	fd = 1;
	ft_putendl_fd(s, fd);
	
	return (0);
}*/
