/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:01:07 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:42:33 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*source;

	i = 0;
	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!dst && !source)
		return (NULL);
	if (dst >= source)
	{
		while (n--)
			dst[n] = source[n];
	}
	else
	{
		while (i < n)
		{
			dst[i] = source[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	size_t	n = 5;
	char	dest[n];
	char	*src = "HOLAHOLA";
	
	ft_memmove (dest, src, n);
	printf("resultado ft es: %s\n", dest);
	memmove (dest, src, n);
	printf("resultado original es: %s\n", dest);
	
	if (ft_memmove(dest, src, n) == memmove(dest, src, n))
		printf("Propia y original coinciden\n");
	else
		printf("No coinciden\n");

	return (0);
}*/
