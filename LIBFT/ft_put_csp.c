/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_csp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 23:49:07 by frubio-i          #+#    #+#             */
/*   Updated: 2024/08/17 22:46:37 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_chr(char c, int *count)
{
	if (write(1, &c, 1) != 1)
		*count = -1;
	(*count)++;
	return (*count);
}

void	ft_put_str(char *s, int *count)
{
	if (s == NULL)
	{
		ft_put_str("(null)", count);
		return ;
	}
	while (*s != '\0')
	{
		ft_put_chr(*s, count);
		s++;
	}
}

void	ft_put_p(unsigned long ptr, int *count, int onetime)
{
	char	*hex_chr;

	hex_chr = "0123456789abcdef";
	if (onetime == 0)
	{
		if (ptr == 0 && onetime == 0)
		{
			ft_put_str("(nil)", count);
			return ;
		}
		else
			ft_put_str("0x", count);
		onetime++;
	}
	if (ptr >= 16)
		ft_put_p((ptr / 16), count, onetime);
	ft_put_chr(hex_chr[ptr % 16], count);
}
