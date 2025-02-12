/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:59:58 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:34:00 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}
/*
int	main(void)
{
	char	*s = "ACHO PIJO HUEVOS";

	printf("Longitud propia = %zu\n", ft_strlen(s));
	printf("Longitud original = %zu\n", strlen(s));

	if (ft_strlen(s) == strlen(s))
		printf("\nOriginal y propia coinciden");
	else
		printf("\nOriginal y propia NO coinciden");

	return (0);
}*/
