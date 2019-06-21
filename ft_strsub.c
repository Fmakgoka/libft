/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2019/06/21 10:17:21 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/06/21 10:20:49 by fmakgoka         ###   ########.fr       */
=======
/*   Created: 2019/06/06 10:38:52 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/06/20 16:43:50 by llanga           ###   ########.fr       */
>>>>>>> 85d9b44dc3af71967eb5f6ee88e2624f8caf463f
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * (len + 1));
<<<<<<< HEAD
	if (str == NULL || s == NULL || start > ft_strlen(s) || len > ft_strlen(s))
=======
	if (str == NULL || s == NULL || start > strlen(s) || len > strlen(s))
>>>>>>> 85d9b44dc3af71967eb5f6ee88e2624f8caf463f
		return (NULL);
	i = 0;
	while ((size_t)i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
