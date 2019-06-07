/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:33:40 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/06/07 16:55:40 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		size;
	int		x;

	i = 0;
	j = 0;
	while (((s[j] == '\n') || (s[j] == ' ') || (s[j] == '\t') || (s[i] == '\v')
		    || (s[i] == '\r') || (s[i] == '\f')) && s[j] != '\0')
	{
		j++;
	}
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (((s[i] == '\n') || (s[i] == '\t') || (s[i] == ' ')
		    || (s[i] == '\v') || (s[i] == '\r') || (s[i] == '\f')) && i >= 0)
	{
		i--;
	}
	size = i - j + 1;
	str = (char*)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	x = 0;
	while (j <= i)
	{
		str[x] = s[j];
		j++;
		x++;
	}
	str[size] = '\0';
	return (str);
}
