/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:01:09 by jmeli             #+#    #+#             */
/*   Updated: 2024/11/29 10:30:22 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_in_ascending_order(char **arguments, int size_a)
{
	int	i;

	i = 0;
	while (i + 1 < size_a)
	{
		if (ft_atoi(arguments[i]) > ft_atoi(arguments[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int     ft_there_is_dup(char **arguments, int size_a)
{
        int     i;
        int     j;

        i = 0;
        while (i < size_a)
        {
                j = 1;
                while (i + j < size_a)
                {
                        if (ft_atoi(arguments[i]) == ft_atoi(arguments[i + j]))
                                return (1);
                        j++;
                }
                i++;
        }
        return (0);
}
