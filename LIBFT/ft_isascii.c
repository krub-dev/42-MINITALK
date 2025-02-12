/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:59:09 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:31:46 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = 'A';
	
	if (ft_isascii(c) != 0)
		printf("Es ascii\n");
	else
		printf("No es ascii\n");
	
	if (isascii(c) != 0)
		printf("Original es ascii");
	else
		printf("Original no es ascii");
	
	if (ft_isascii(c) == isascii(c))
		printf("\nOriginal y propia coinciden");
	else
		printf("\nOriginal y propia NO coinciden");	
	
	return (0);
}*/
