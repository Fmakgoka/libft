/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:05:25 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/05/29 12:17:50 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = j + 1;
	while (dst[j] && dstsize > 0)
	{
		j++;
		i++;
		dstsize--;
	}
	while (*src && dstsize-- > 1)
	{
		*dst++ = *src++; 
	}
	if (dstsize == 1)
	{
		dst[j] = '\0'
	}
	return (j +i)
}
