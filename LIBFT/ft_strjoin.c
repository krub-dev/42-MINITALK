/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:50:36 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 13:13:35 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	sjoin = (char *)malloc(((len1 + len2) + 1) * sizeof(char));
	if (!sjoin)
		return (NULL);
	if ((len1 + len2) > 0)
	{
		while (s1[j] != '\0')
			sjoin[i++] = s1[j++];
		j = 0;
		while (s2[j] != '\0')
			sjoin[i++] = s2[j++];
	}
	sjoin[i] = '\0';
	return (sjoin);
}
/*
int	main(void)
{
	const char	*s1 = "";
	const char	*s2 = "";
	char		*sjoin;

	sjoin = ft_strjoin(s1, s2);
	printf("Resultado de ft_join es: %s\n", sjoin);
	
	free(sjoin);
	
	return (0);
}*/
