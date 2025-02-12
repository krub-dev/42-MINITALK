/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:56:48 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 12:52:03 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	ch = (char)c;
	i = 0;
	while (s[i] != ch && s[i])
		i++;
	if (s[i] == ch)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	const char	*s = "Hola";
	int	c = 97;
	char	*res_ft = ft_strchr(s, c);
	char	*res_orig = strchr(s, c);
 	
	printf("Propia: %s\n", res_ft);
	printf("Original: %s\n", res_orig);
	
	if (res_ft == res_orig)
		printf("Original y propia coinciden\n");
	else
		printf("Original y propia NO coinciden\n");

	return (0);
}*/
