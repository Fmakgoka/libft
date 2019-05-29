/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:15:24 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/05/29 11:02:55 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = dst;
	str2 = (char *)src;
	i = 0;
	while (n > 0 && (size_t)i < n)
	{
		str1[i] = str2[i];
		if (str2[i] == c)
		{
			return (str1);
		}
		i++;
		n--;
	}
	return (NULL);
}
