/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:57:52 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 13:02:56 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (big[i] == little[0])
		{
			while (big[i + j] == little[j] && (i + j) < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*big = "Hola acho, que haces?";
	const char	*little = "";
	const char	*res_ft = ft_strnstr(big, little, 10);
	const char	*res_orig = strnstr(big, little, 10);

	printf("Propia retorna: '%s'\nOriginal retorna: '%s'\n", res_ft, res_orig);
	
	if (res_ft == res_orig)
		printf("Propia y original coinciden\n");
	else
		printf("Propia y original NO coinciden\n");
	
	return (0);
}*/
