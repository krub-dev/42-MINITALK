/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:58:35 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:35:10 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dst;
	size_t			i;

	dst = (unsigned char *)s;
	i = 0;
	while (i < n)
		dst[i++] = (unsigned char) c;
	return (dst);
}
/*
int	main(void)
{
	int	c = 65;
	size_t	n = 3;
	unsigned char	s[n];
	
	if (ft_memset(s, c, n) == memset(s, c, n))
		printf("Propia y original coinciden\n");
	else
		printf("No coinciden\n");
	
	printf("resultado es: %s", s);
	
	return (0);
}*/
