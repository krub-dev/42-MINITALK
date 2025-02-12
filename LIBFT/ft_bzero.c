/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:56:23 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:38:24 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dst;
	size_t			i;

	dst = (unsigned char *)s;
	i = 0;
	while (i != n)
		dst[i++] = '\0';
}
/*
int	main(void)
{
	size_t	n = 24;
	unsigned char	s[n];

	ft_bzero (s, n);
	char res_ft = printf("resultado es: %s\n", s);
	bzero (s, n);
	char res_orig = printf("resultado es: %s\n", s);
	
	if (res_ft == res_orig)
		printf("Propia y original coinciden\n");
	else
		printf("No coinciden\n");
	
	return (0);
}*/
