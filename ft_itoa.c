/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:37:47 by mrobaii           #+#    #+#             */
/*   Updated: 2021/11/21 06:30:10 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int c)
{
	int				i;
	unsigned int	k;
	int				flag;

	if (c < 0)
	{
		flag = 1;
		k = -c;
	}
	else
	{
		flag = 0;
		k = c;
	}
	i = 1;
	while (c / 10)
	{
		c = c / 10;
		i++;
	}
	return (i + flag);
}

void	ft_depanagae(int n, int size, char **itoa, unsigned int *c)
{
	if (n < 0)
	{
		*c = -n;
		while (size > 0)
		{
			(*itoa)[size] = *c % 10 + 48;
			*c = *c / 10;
			size--;
		}
		(*itoa)[size] = '-';
	}
	else
	{
		*c = n;
		while (size >= 0)
		{
			(*itoa)[size] = *c % 10 + 48;
			*c = *c / 10;
			size--;
		}
	}
}

char	*ft_itoa(int n)
{
	char			*itoa;
	int				size;
	unsigned int	c;

	size = ft_count(n);
	itoa = ft_calloc(sizeof(char), (size + 1));
	if (!itoa)
		return (NULL);
	size--;
	ft_depanagae(n, size, &itoa, &c);
	return (itoa);
}
