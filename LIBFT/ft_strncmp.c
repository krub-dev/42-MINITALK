/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:57:30 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:57:26 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "\0";
	char	s2[] = "\0";
	int		res_ft;
	int		res_orig;

	res_ft = ft_strncmp(s1, s2, 10);
	res_orig = strncmp(s1, s2, 10);
	
	printf("Ft retorna: %d\n", res_ft);
	printf("Original retorna: %d\n", res_orig);
	
	//test para ver si coincide original con ft_strncmp
	if (res_ft == res_orig)
		printf("Original y propia coinciden\n");
	else
		printf("Original y propia NO coinciden\n");
	
	//test para ft_strncmp
	if (res_ft == 0)
		printf("s1 y s2 son iguales\n");
	else if (res_ft < 0)
		printf("s1 < s2\n");
	else
		printf("s1 > s2\n");
	
	return (0);
}*/
