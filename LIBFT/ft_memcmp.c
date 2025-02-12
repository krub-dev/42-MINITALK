/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:08:04 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:59:12 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*src2;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	i = 0;
	while (!n)
		return (0);
	while (src1[i] == src2[i] && i < (n - 1))
		i++;
	return (src1[i] - src2[i]);
}
/*
int	main(void)
{
	size_t	n = '\0';
	const char	*s1 = "HOLA";
	const char	*s2 = "H";
	
	size_t	res_ft = ft_memcmp(s1, s2, n);
	size_t	res_orig = memcmp(s1, s2, n);
	
	printf("Propia es: %zu\nOriginal es: %zu\n", res_ft, res_orig);
	
	if (res_ft == res_orig)
		printf("Original y propia coinciden\n");
	else
		printf("Original y propia NO coinciden\n");
	
	if (res_ft == 0)
		printf("s1 y s2 son iguales\n");
	else if (res_ft < 0)
		printf("s1 < s2\n");
	else
		printf("s1 > s2\n");
	
	return (0);
}*/
