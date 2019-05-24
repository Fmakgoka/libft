/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:59:01 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/05/24 16:30:56 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		main()
{
	char s1[] = "hey you there";
	char s2[] = "you";

	ptr = strnstr(s1, s2, 16);

	printf("'%s'\n", strnstr(s2, s1, n));
	return (0);
}
