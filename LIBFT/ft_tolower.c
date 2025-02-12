/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:49:46 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:50:16 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	int	c;

	c = 'A';

	if (ft_tolower(c) == c + 32)
		printf("Es mayus, la convierto a minus\n");
	else
		printf("Ya es minus o no es alfabeto\n");
	if (tolower(c) == c + 32)
		printf("Original es mayus, la convierto a minus");
	else
		printf("Ya es minus o no es alfabeto");
	
	if (ft_tolower(c) == tolower(c))
		printf("\nOriginal y propia coinciden");
	else
		printf("\nOriginal y propia NO coinciden");
	
	return (0);
}*/
