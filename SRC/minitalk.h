/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 02:44:25 by frubio-i          #+#    #+#             */
/*   Updated: 2024/12/16 13:00:00 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "../LIBFT/libft.h"
# include "../LIBFT/ft_printf.h"

# include <stdlib.h>	// malloc
# include <stdio.h>
# include <unistd.h>	// write, getpid
# include <signal.h>	// signal lib

// Colors
# define RESET		"\x1b[0m"
# define RED		"\x1b[0;31m"
# define BRED		"\x1b[1;31m"
# define GREEN		"\x1b[0;32m"
# define BGREEN		"\x1b[1;32m"
# define PURPLE		"\x1b[0;35m"
# define BPURPLE	"\x1b[1;35m"
# define BLUE		"\x1b[0;34m"
# define BBLUE		"\x1b[1;34m"
# define CYAN		"\x1b[0;36m"
# define BCYAN		"\x1b[1;36m"
# define WHITE		"\x1b[0;97m"
# define BWHITE		"\x1b[1;97m"
# define YELLOW		"\x1b[0;33m"
# define BYELLOW	"\x1b[1;33m"

// Servidor
void	sv_init(void);
void	sigusr_handler(int signum, siginfo_t *info, void *context);
void	conv_to_char(char *g_c, int cpid);
void	init_buffer(int *buff);

// Client
void	init_client(int spid, char *str);
int		check_errors(int spid, char *str);
void	conv_signal(int spid, char *str);
void	confirmation_handler(int signum);

#endif
