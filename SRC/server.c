/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 02:52:11 by frubio-i          #+#    #+#             */
/*   Updated: 2024/12/21 04:43:08 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	g_c[9];

// SERVER
void	init_buffer(int *buff)
{
	buff[0] = 128;
	buff[1] = 64;
	buff[2] = 32;
	buff[3] = 16;
	buff[4] = 8;
	buff[5] = 4;
	buff[6] = 2;
	buff[7] = 1;
}

void	conv_to_chr(char *g_c, int cpid)
{
	int	c_ascii;
	int	i;
	int	j;
	int	buffer[8];

	init_buffer(buffer);
	c_ascii = 0;
	i = 7;
	j = 0;
	while (i >= 0)
	{
		if (g_c[i] == '1')
			c_ascii = c_ascii + buffer[j];
		j++;
		i--;
	}
	if (c_ascii == '\0')
	{
		ft_printf(BWHITE "\n>>> " RESET);
		kill(cpid, SIGUSR2);
	}
	else
		ft_printf("%c", c_ascii);
}

void	sigusr_handler(int signum, siginfo_t *info, void *context)
{
	int	len;
	int	cpid;

	(void)context;
	cpid = info->si_pid;
	g_c[8] = '\0';
	len = ft_strlen(g_c);
	if (signum == SIGUSR1)
		g_c[len] = '1';
	else if (signum == SIGUSR2)
		g_c[len] = '0';
	if (len == 7)
	{
		conv_to_chr(g_c, cpid);
		ft_memset(g_c, '\0', 8);
		len = 0;
	}
	kill(cpid, SIGUSR1);
}

void	sv_init(void)
{
	int					pid;
	struct sigaction	signal_msg;

	pid = getpid();
	ft_printf(BCYAN "---------------------------" RESET);
	ft_printf(BCYAN "-----------------------------\n" RESET);
	ft_printf(BYELLOW " __  __  ______  _______  ______      ");
	ft_printf("_______  ___ ___\n");
	ft_printf("|  |/  ||   __ \\|   |   ||   __ \\    |     __||   |   | \n");
	ft_printf("|     < |      <|   |   ||   __ < __ |__     ||   |   | \n");
	ft_printf("|__|\\__||___|__||_______||______/|__||_______| \\_____/ \n");
	ft_printf(BCYAN "\n+-+-+-+-+");
	ft_printf(BCYAN "-----------------------------------------------\n");
	ft_printf(BYELLOW "  42BCN | Frubio-i | MINITALK |  SERVER PID >> "RESET);
	ft_printf(BRED "%d" RESET BYELLOW"  \n" RESET, pid);
	ft_printf(BCYAN "+-+-+-+-+" RESET);
	signal_msg.sa_sigaction = sigusr_handler;
	signal_msg.sa_flags = SA_SIGINFO;
	sigemptyset(&signal_msg.sa_mask);
	sigaction(SIGUSR1, &signal_msg, NULL);
	sigaction(SIGUSR2, &signal_msg, NULL);
}

int	main(void)
{
	sv_init();
	ft_printf(BCYAN "-----------------------------------------------\n" RESET);
	ft_printf(BWHITE "Esperando mensaje...\n" RESET);
	ft_printf(BWHITE ">>> " RESET);
	while (1)
		pause();
	return (0);
}
