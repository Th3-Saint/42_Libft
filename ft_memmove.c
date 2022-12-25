/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:05:57 by mrobaii           #+#    #+#             */
/*   Updated: 2021/11/20 00:43:27 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (dest == 0 && src == 0)
		return (0);
	if (n == 0)
		return (dest);
	if (d > s)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else if (d < s)
		ft_memcpy(d, s, n);
	return (dest);
}
