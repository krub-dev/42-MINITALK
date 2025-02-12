/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:05:20 by frubio-i          #+#    #+#             */
/*   Updated: 2024/07/21 13:04:06 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		res;
	int		contsign;

	i = 0;
	contsign = 1;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			contsign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	res *= contsign;
	return (res);
}
/*
int	main(void)
{
	//const char	*nptr = "    ----+423asd4";
	const char	*nptr = "asdgasds4";
	int	res_ft = ft_atoi(nptr);
	int	res_orig = atoi(nptr);
	
	printf("Propia es: %d\nOriginal es: %d\n", res_ft, res_orig);
	
	if (res_ft == res_orig)
		printf("Propia y original coinciden\n");
	else
		printf("No coinciden\n");
	
	return (0);
}*/
