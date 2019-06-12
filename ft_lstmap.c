/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhuvhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:36:39 by lkhuvhe           #+#    #+#             */
/*   Updated: 2019/06/12 18:49:48 by lkhuvhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new = f(lst);
	if (lst ->next)
	{
		lst = lst->next;
		lst->next = f(lst);
	}
	return (new);
}
