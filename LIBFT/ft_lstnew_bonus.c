/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:32:21 by frubio-i          #+#    #+#             */
/*   Updated: 2024/10/27 20:33:26 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Crea un nuevo nodo utilizando malloc(3). La
variable miembro ’content’ se inicializa con el
contenido del parámetro ’content’. La variable
’next’, con NULL.*/
t_list	*ft_lstnew(void *content)
{
	t_list	*n_elem;

	n_elem = malloc(sizeof(t_list));
	if (!n_elem)
		return (NULL);
	n_elem->content = content;
	n_elem->next = NULL;
	return (n_elem);
}
