/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:33:40 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/06/18 15:02:14 by fmakgoka         ###   ########.fr       */
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

	i = ft_strlen(s) - 1;
	j = 0;
	if (!s)
		return (NULL);
	while (((s[j] == '\n') || (s[j] == ' ') || (s[j] == '\t')) && s[j] != '\0')
	{
		j++;
	}
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (((s[i] == '\n') || (s[i] == '\t') || (s[i] == ' ')) && i >= 0)
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
		str[x++] = s[j++];
	}
	str[size] = '\0';
	return (str);
}
