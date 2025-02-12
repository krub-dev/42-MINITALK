/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:53:02 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 13:37:43 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_int_len(n);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	while (n != 0)
	{
		str[--i] = '0' + n % 10;
		n = n / 10;
	}
	return (str);
}
/*
int	main(void)
{
	int	n = 0;
	char	*str = ft_itoa(n);

	printf ("Numero %d convertido a *char es: %s\n", n, str);
	
	free(str);
	
	return (0);
}*/
