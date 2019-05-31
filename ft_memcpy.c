/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:03:25 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/05/31 11:30:51 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = dst;
	str2 = (char *)src;
	i = 0;
	if (n == 0 || dst == src)
	{
		return (dst);
	}
	while (--n)
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = str2[i];
	return (dst);
}
