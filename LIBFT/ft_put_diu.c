/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_diu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:20:12 by frubio-i          #+#    #+#             */
/*   Updated: 2024/08/17 22:47:15 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_di(int x, int *count)
{
	if (x == -2147483648)
	{
		ft_put_str("-2147483648", count);
		return ;
	}
	if (x < 0)
	{
		x *= -1;
		ft_put_chr('-', count);
	}
	if (x >= 10)
		ft_put_di((x / 10), count);
	ft_put_chr((x % 10 + '0'), count);
}

void	ft_put_u(unsigned int x, int *count)
{
	if (x >= 10)
		ft_put_u((x / 10), count);
	ft_put_chr((x % 10 + '0'), count);
}
