/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:45:34 by fmakgoka          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/06/21 10:03:23 by fmakgoka         ###   ########.fr       */
=======
/*   Updated: 2019/06/20 16:14:26 by fmakgoka         ###   ########.fr       */
>>>>>>> 85d9b44dc3af71967eb5f6ee88e2624f8caf463f
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_counter(char const *s, char c)
{
	unsigned int	i;
	unsigned int	ctr;
<<<<<<< HEAD

=======
	
>>>>>>> 85d9b44dc3af71967eb5f6ee88e2624f8caf463f
	i = 0;
	ctr = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
			ctr++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			i++;
	}
	return (ctr);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	ctr;
	size_t	words;
<<<<<<< HEAD

=======
	
>>>>>>> 85d9b44dc3af71967eb5f6ee88e2624f8caf463f
	i = 0;
	j = 0;
	ctr = 0;
	words = ft_counter(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * words)))
		return (NULL);
	while (ctr < words)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			j = 0;
		while (s[i + j] != c && s[i + j] != '\0')
			j++;
		str[ctr] = (char *)malloc(j + 1);
		j = 0;
		while (s[i] != c && s[i] != '\0')
<<<<<<< HEAD
			str[ctr][j++] = s[i++];
=======
		{
			str[ctr][j] = s[i];
			j++;
			i++;
		}
>>>>>>> 85d9b44dc3af71967eb5f6ee88e2624f8caf463f
		str[ctr][j] = '\0';
		ctr++;
	}
	return (str);
}
