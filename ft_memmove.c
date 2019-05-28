/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:52:15 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/05/28 16:26:56 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = dst;
	str2 = (char *)src;
	while (len-- && i < len)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
