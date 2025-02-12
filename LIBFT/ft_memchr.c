/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:02:14 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 13:01:26 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*src;
	size_t			i;

	ch = (unsigned char)c;
	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == ch)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	size_t	n = 6;
	size_t	c = 'A';
	const char	*s = "HOLA";
	
	char *res_ft = ft_memchr (s, c, n);
	if (res_ft != NULL)
		printf("Resultado propia es: %c\n", *res_ft);
	
	char *res_orig = memchr (s, c, n);
	if (res_orig != NULL)
	printf("Resultado original es: %c\n", *res_orig);
	
	if (res_ft == res_orig)
		printf("Original y propia coinciden\n");
	else
		printf("Original y propia NO coinciden\n");
	
	return (0);
}*/
