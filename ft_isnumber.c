/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:13:25 by jmeli             #+#    #+#             */
/*   Updated: 2024/11/29 10:20:31 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isnumber(char *str)
{
	size_t	len;

	len = ft_strlen(str);
	while (--len > 0)
	{
		if (ft_isdigit(str[len]) == 0)
			return (0);
	}
	if ((str[0] != '-') && (ft_isdigit(str[0]) == 0))
		return (0);
	return (1);
}
