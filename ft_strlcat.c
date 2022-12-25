/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:18:48 by mrobaii           #+#    #+#             */
/*   Updated: 2021/11/22 02:14:48 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	de;
	size_t	sr;

	sr = ft_strlen(src);
	if (dstsize == 0)
		return (sr);
	de = ft_strlen(dst);
	i = 0;
	while (de + i < (dstsize - 1) && src[i])
	{
		dst[de + i] = src[i];
		i++;
	}
	dst[de + i] = '\0';
	if (dstsize > de)
		return (de + sr);
	else
		return (dstsize + sr);
}
