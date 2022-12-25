/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 02:24:26 by mrobaii           #+#    #+#             */
/*   Updated: 2021/11/25 01:06:30 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst)
	{
		if (*lst)
		{
			tmp = *lst;
			while (tmp)
			{
				ft_lstdelone(*lst, del);
				*lst = tmp->next;
				tmp = tmp->next;
			}
		}
	}
}
