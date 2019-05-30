/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:34:45 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/05/30 09:59:14 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	while ((str[i] == ' ') || (str[i] == '\t')
			|| (str[i] == '\v') || (str[i] == '\n')
			|| (str[i] == '\r') || (str[i] == '\f'))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = 10 * nb + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
