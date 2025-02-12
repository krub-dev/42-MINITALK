/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:44:02 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 13:09:45 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char	*s1 = "22222";

	char	*res_ft = ft_strdup (s1);
	printf("Duplicado de propia: %s\n", res_ft);
	char	*res_orig = strdup (s1);
    printf("Duplicado de original: %s\n", res_orig);
	
	if (*res_ft == *res_orig)
		printf("Original y propia coinciden\n");
    else
		printf("Original y propia NO coinciden\n");

	free(res_ft);
	free(res_orig);
	
	return (0);
}*/
