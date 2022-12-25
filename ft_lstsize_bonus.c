/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:22:54 by mrobaii           #+#    #+#             */
/*   Updated: 2021/11/25 01:06:52 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*tmp;

	tmp = lst;
	counter = 0;
	if (lst)
	{
		while (tmp)
		{
			counter++;
			tmp = tmp->next;
		}
	}
	return (counter);
}
