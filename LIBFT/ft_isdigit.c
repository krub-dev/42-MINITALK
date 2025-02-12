/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:58:27 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/20 06:48:31 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = '8';
	
	if (ft_isdigit(c) != 0)
		printf("Es numerico\n");
	else
		printf("No es numerico\n");
	
	if (isdigit(c) != 0)
		printf("Original es numerico");
	else
		printf("Original no es numerico");
	
	if (ft_isdigit(c) == isdigit(c))
		printf("\nOriginal y propia coinciden");
	
	return (0);
}*/
