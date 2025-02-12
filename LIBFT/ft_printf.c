/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 06:38:10 by frubio-i          #+#    #+#             */
/*   Updated: 2024/08/21 20:53:13 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_type(const char *pf_str, int *count, va_list pf_args)
{
	long	ptr;
	int		onetime;

	onetime = 0;
	if (*pf_str == 'c')
		ft_put_chr(va_arg(pf_args, int), count);
	else if (*pf_str == 's')
		ft_put_str(va_arg(pf_args, char *), count);
	else if (*pf_str == 'p')
	{
		ptr = va_arg(pf_args, long);
		ft_put_p(ptr, count, onetime);
	}
	else if (*pf_str == 'd' || *pf_str == 'i')
		ft_put_di(va_arg(pf_args, int), count);
	else if (*pf_str == 'u')
		ft_put_u(va_arg(pf_args, unsigned int), count);
	else if (*pf_str == 'x' || *pf_str == 'X')
		ft_put_hex(va_arg(pf_args, unsigned int), pf_str, count);
	else if (*pf_str == '%')
		ft_put_chr('%', count);
}

int	ft_printf(char const *pf_str, ...)
{
	va_list	pf_args;
	int		count;

	count = 0;
	va_start(pf_args, pf_str);
	while (*pf_str)
	{
		if (*pf_str == '%')
		{
			pf_str++;
			if (*pf_str == '\0')
				return (-1);
			ft_check_type(pf_str, &count, pf_args);
		}
		else
			ft_put_chr(*pf_str, &count);
		pf_str++;
	}
	va_end(pf_args);
	return (count);
}
