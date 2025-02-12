/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:52:27 by frubio-i          #+#    #+#             */
/*   Updated: 2024/10/27 21:12:33 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Cuenta el número de nodos de una lista.
int	ft_lstsize(t_list *lst)
{
	int	nlst;

	nlst = 0;
	while (lst != NULL)
	{
		nlst++;
		lst = lst->next;
	}
	return (nlst);
}
