/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 16:46:57 by ede-nada          #+#    #+#             */
/*   Updated: 2020/03/04 21:30:48 by evandrosu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),	void (*del)(void *))
{
	t_list *new_lst;
	
	if (!lst)
		return (NULL);
	if ((new_lst = ft_lstnew(f(lst->content))) == NULL)
	{
		ft_lstclear(&new_lst, del);
		return (NULL);
	}
	new_lst->next = ft_lstmap(lst->next, f, del);
	return (new_lst);
	
}
