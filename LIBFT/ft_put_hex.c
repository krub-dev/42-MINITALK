/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:45:23 by frubio-i          #+#    #+#             */
/*   Updated: 2024/08/17 22:46:48 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex(unsigned int x, const char *type, int *count)
{
	const char	*hex_chr;

	hex_chr = "0123456789abcdefABCDEF";
	if (x == 0)
		ft_put_chr('0', count);
	else
	{
		if (x >= 16)
		{
			ft_put_hex(x / 16, type, count);
			x = x % 16;
		}
		if (*type == 'X' && x >= 10)
			x = x + 6;
		ft_put_chr(hex_chr[x], count);
	}
}
