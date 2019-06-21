/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 09:16:19 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/06/20 09:18:44 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int c, char **v)
{
	if (c != 2)
		return (0);
	printf("%s\n", ft_strtrim(v[1]));
	return (0);

}
