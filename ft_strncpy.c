/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:43:07 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/06/18 09:55:57 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;
	int j;

	i = ft_strlen(src);
	j = 0;
	while (j < i && (size_t)j < len)
	{
		dst[j] = src[j];
		j++;
	}
	while (j < len)
		dst[j++] = '\0';
	return (dst);
}
