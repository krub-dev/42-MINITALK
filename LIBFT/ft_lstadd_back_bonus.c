/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:50:28 by frubio-i          #+#    #+#             */
/*   Updated: 2024/10/29 19:50:32 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Añade el nodo ’new’ al final de la lista ’lst’.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tail;

	if (!lst || !new)
		return ;
	tail = ft_lstlast(*lst);
	if (tail)
		tail->next = new;
	else
		*lst = new;
}
