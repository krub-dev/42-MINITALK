/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:49:58 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:44:14 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	isrc;

	i = 0;
	isrc = 0;
	while (src[isrc] != '\0')
		isrc++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (isrc);
}
/*
int	main(void)
{
	char	dst[5];
	char	*src = "ACHO";
	size_t	size = 10;

	if (ft_strlcpy(dst, src, size) == strlcpy(dst, src, size))
		printf("Propia y original coinciden\n");
	else
		printf("No coinciden\n");
	
	return (0);
}*/
