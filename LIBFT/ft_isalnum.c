/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:58:48 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:31:06 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = '_';
	
	if (ft_isalnum(c) != 0)
		printf("Es alfanumerico\n");
	else
		printf("No es alfanumerico\n");
	
	if (isalnum(c) != 0)
		printf("Original es alfanumerico");
	else
		printf("Original no es alfanumerico");
	
	if (ft_isalnum(c) == isalnum(c))
		printf("\nOriginal y propia coinciden");
	else
		printf("\nOriginal y propia NO coinciden");
	
	return (0);
}*/
