/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:54:01 by frubio-i          #+#    #+#             */
/*   Updated: 2024/10/29 18:00:45 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Elimina y libera el nodo ’lst’ dado y todos los
consecutivos de ese nodo, utilizando la función
’del’ y free(3). Al final, el puntero a la lista 
debe ser NULL.*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*actual;

	if (!lst || !del)
		return ;
	actual = *lst;
	while (actual != NULL)
	{
		tmp = actual;
		actual = actual->next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}
