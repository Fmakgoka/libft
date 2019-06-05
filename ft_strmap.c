/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:48:25 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/06/05 12:24:26 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char *s, char  (*f)(char))
{
	size_t i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while(s[i])
		i++;
	char *d = (char *)malloc(sizeof(char)*(i + 1)) ;
	//s = malloc();
	i = 0;
	while (s[i])
	{
		d[i] = f(s[i]);
		i++;
	}
	d[i] = '\0';
	return(d);
}
