/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:58:21 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:39:02 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*source;

	dst = (char *)dest;
	source = (char *)src;
	if (!dst && !source)
		return (NULL);
	i = 0;
	while (i++ < n)
		dst[i - 1] = (char)source[i - 1];
	return (dst);
}
/*
int	main(void)
{
	size_t	n = 50;
	char	dest[n];
	char	*src = "HOLA";
	
	ft_memcpy (dest, src, n);
	printf("resultado ft es: %s\n", dest);
	memcpy (dest, src, n);
	printf("resultado original es: %s\n", dest);
	
	if (ft_memcpy (dest, src, n) == memcpy (dest, src, n))
		printf("Propia y original coinciden\n");
	else
		printf("No coinciden\n");
	
	return (0);
}*/
