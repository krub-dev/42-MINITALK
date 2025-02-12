/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 07:30:40 by frubio-i          #+#    #+#             */
/*   Updated: 2024/08/17 22:44:42 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>	//libreria con size_t
# include <stdarg.h>	//libreria funciones variadricas (va_list/start/arg/end)
# include <stdio.h>		//libreria printf original
# include <stdlib.h>	//malloc
# include <unistd.h>	//para write

//Funciones Proyecto PRINTF

void	ft_check_type(char const *pf_str, int *count, va_list pf_args);
int		ft_printf(char const *pf_str, ...);

int		ft_put_chr(char c, int *count);
void	ft_put_str(char *s, int *count);
void	ft_put_p(unsigned long ptr, int *count, int onetime);

void	ft_put_di(int x, int *count);
void	ft_put_u(unsigned int x, int *count);

void	ft_put_hex(unsigned int x, const char *type, int *count);

#endif
