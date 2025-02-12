/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:49:33 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:48:48 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	int	c;

	c = '_';
	
	if (ft_toupper(c) == c)
		printf("Ya es mayus o no es alfabeto\n");
	else
		printf("No es mayus, la convierto\n");
	if (toupper(c) == c)
		printf("Original ya es mayus o no es alfabeto");
	else
		printf("Original no es mayus, la convierto");
	
	if (ft_toupper(c) == toupper(c))
		printf("\nOriginal y propia coinciden");
	else
		printf("\nOriginal y propia NO coinciden");

	return (0);
}*/
