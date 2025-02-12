/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:50:12 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:45:30 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	size_t	total;

	i = 0;
	total = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size == 0)
		return (src_len);
	if (dst_len >= size)
		total = src_len + size;
	else
		total = src_len + dst_len;
	while (src[i] != '\0' && dst_len < (size - 1))
		dst[dst_len++] = src[i++];
	dst[dst_len] = '\0';
	return (total);
}
/*
int	main(void)
{
	char dst[] = "Hola, ";
	char src[] = "acho";

	printf("El retorno es: %zu\n", ft_strlcat(dst, src, 20));
	printf("El retorno de la original es: %zu\n", strlcat(dst, src, 20));
	
	if (ft_strlcat(dst, src, 20) == strlcat(dst, src, 20))
		printf("Propia y original coinciden\n");
	else
		printf("No coinciden\n");
	
	return (0);
}*/
