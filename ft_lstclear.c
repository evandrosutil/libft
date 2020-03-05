/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 14:21:51 by ede-nada          #+#    #+#             */
/*   Updated: 2020/02/29 20:22:33 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next_one;

	if (!lst)
		return ;
	while ((*lst))
	{
		next_one = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = next_one;
	}
}
