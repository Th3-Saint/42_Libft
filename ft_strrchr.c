/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:26:15 by mrobaii           #+#    #+#             */
/*   Updated: 2021/11/20 00:43:57 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	if ((char) c == 0)
		return ((char *) str + ft_strlen(str));
	len = ft_strlen(str);
	if (len == 0)
		return (0);
	while (len--)
	{
		if (str[len] == (char)c)
		{
			return ((char *)&str[len]);
		}
	}
	return (0);
}
