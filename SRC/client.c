/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 04:18:22 by frubio-i          #+#    #+#             */
/*   Updated: 2024/12/16 13:21:06 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_check = 0;

// CLIENT 
void	confirmation_handler(int signum)
{
	if (signum == SIGUSR1)
		g_check = 1;
	if (signum == SIGUSR2)
	{
		ft_printf(BGREEN "Recibido por el servidor.\n" RESET);
		exit(0);
	}
}

void	conv_signal(int spid, char *str)
{
	size_t	i;
	int		j;
	int		bit;

	i = 0;
	while (i <= ft_strlen(str))
	{
		j = 0;
		bit = 1;
		while (j < 8 && i <= ft_strlen(str))
		{
			g_check = 0;
			if (str[i] & bit)
				kill(spid, SIGUSR1);
			else
				kill(spid, SIGUSR2);
			bit <<= 1;
			while (!g_check)
				pause();
			j++;
		}
		i++;
	}
}

void	init_client(int spid, char *str)
{
	ft_printf(BGREEN "Servidor existe. Argumentos validos.\n" RESET);
	ft_printf(BBLUE "Mensaje a mandar: [%s]\n", str);
	ft_printf(BBLUE "PID del servidor: [%d]\n", spid);
	ft_printf(WHITE "Mensaje tiene %d characters\n" RESET, ft_strlen(str));
	ft_printf(BWHITE "Mandando mensaje...\n" RESET);
	signal(SIGUSR1, confirmation_handler);
	signal(SIGUSR2, confirmation_handler);
	conv_signal(spid, str);
}

int	check_errors(int spid, char *str)
{
	if (kill(spid, 0) != 0)
	{
		ft_printf(BRED "--------------------------------------------\n" RESET);
		ft_printf(BRED "ERROR.\n" RESET);
		ft_printf(RED "PID invalido.\n" RESET);
		ft_printf(BRED "--------------------------------------------\n" RESET);
		return (1);
	}
	if (!str || str[0] == '\0')
	{
		ft_printf(BRED "--------------------------------------------\n" RESET);
		ft_printf(BRED "ERROR.\n" RESET);
		ft_printf(RED "Argumento invalido/nulo. No hay mensaje.\n" RESET);
		ft_printf(BRED "--------------------------------------------\n" RESET);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	spid;

	spid = 0;
	if (argc == 3)
	{
		spid = ft_atoi(argv[1]);
		if (check_errors(spid, argv[2]) == 1)
			return (1);
		init_client(spid, argv[2]);
	}
	else
	{
		ft_printf(BRED "--------------------------------------------\n" RESET);
		ft_printf(BRED "ERROR.\n" RESET);
		ft_printf(RED "Tienes que introducir 2 argumentos.\n" RESET);
		ft_printf(RED "./client [PID] [STRING].\n" RESET);
		ft_printf(BRED "--------------------------------------------\n" RESET);
		return (1);
	}
	return (0);
}
