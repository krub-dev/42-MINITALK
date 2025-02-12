/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:53:42 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 13:50:19 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	res = (char *)malloc((slen + 1) * sizeof(*res));
	if (!res)
		return (NULL);
	while (i < slen)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
static char	ft_add(unsigned int i, char c)
{
	return (c + i);
}

int	main(void)
{
	char	*s = "Acho";
	char	*res = ft_strmapi(s, ft_add);

	printf("Resultado de ft_strmapi es: %s\n", res);
	
	free(res);
	
	return (0);
}*/
