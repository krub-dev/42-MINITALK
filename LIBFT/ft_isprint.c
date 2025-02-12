/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:59:35 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/20 06:52:23 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = 129;
	
	if (ft_isprint(c) != 0)
		printf("Es printable\n");
	else
		printf("No es printable\n");
	
	if (isalpha(c) != 0)
		printf("Original es printable");
	else
		printf("Original no es printable");
	
	if (ft_isprint(c) == isprint(c))
		printf("\nOriginal y propia coinciden");
	else
		printf("\nOriginal y propia NO coinciden");

	return (0);
}*/
