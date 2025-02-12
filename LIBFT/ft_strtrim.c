/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:51:19 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 13:15:55 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
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
}*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strim;
	size_t	i;
	size_t	cfirst;
	size_t	clast;

	strim = 0;
	i = 0;
	cfirst = 0;
	clast = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[cfirst] && ft_strchr(set, s1[cfirst]))
		cfirst++;
	while (clast > cfirst && ft_strchr(set, s1[clast - 1]))
		clast--;
	strim = malloc((clast - cfirst + 1) * sizeof(char));
	if (!strim)
		return (NULL);
	while (cfirst < clast)
		strim[i++] = s1[cfirst++];
	strim[i] = '\0';
	return (strim);
}
/*
int     main(void)
{
	const char      *s1 = "Hola, que tal estas?";
	const char	*set = " al";
	char *strim;

	strim = ft_strtrim(s1, set);
	printf("Resultado de ft_strtrim es: %s\n", strim);
	
	free(strim);
	
	return (0);
}*/
