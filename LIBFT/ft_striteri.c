/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:56:25 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 13:50:00 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
static void	ft_chng(unsigned int index, char *c)
{
	index = index + 1;
	c = c + 1;
}

int	main(void)
{
	char	s[] = "Acho";

	ft_striteri(s, ft_chng);
	
	printf("Resultado de ft_striteri es: %s\n", s);
	
	return (0);
}*/
