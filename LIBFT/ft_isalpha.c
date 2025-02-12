/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:58:11 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/20 07:06:18 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = 'A';
	
	if (ft_isalpha(c) != 0)
		printf("Es alfabetico\n");
	else
		printf("No es alfabetico\n");
	
	if (isalpha(c) != 0)
		printf("Original es alfabetico");
	else
		printf("Original no es alfabetico");
	
	if (ft_isalpha(c) == isalpha(c))
		printf("\nOriginal y propia coinciden");
	else
		printf("\nOriginal y propia NO coinciden");
	
	return (0);
}*/
