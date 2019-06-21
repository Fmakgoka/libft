/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 10:07:42 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/06/21 10:09:28 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*str;
	size_t		end;
	size_t		start;
	size_t		size;
	size_t		x;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (((s[start] == '\n') || (s[start] == ' ') || (s[start] == '\t') ||\
	(s[start] == '\v')) && s[start] != '\0')
		start++;
	while (((s[end] == '\n') || (s[end] == '\t') || (s[end] == ' ') ||\
	(s[end] == '\v')) && end >= 0)
		end--;
	size = end - start + 1;
	if (!(str = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	x = 0;
	while (start <= end)
		str[x++] = s[start++];
	str[size] = '\0';
	return (str);
}
