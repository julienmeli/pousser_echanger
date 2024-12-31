/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 08:43:13 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/31 09:09:15 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arguments_are_numbers(char **arguments)
{
	int	i;

	i = 0;
	while (arguments[i])
        {
                if (ft_isnumber(arguments[i]) == 0)
                {
                        return (0);
                }
                i++;
        }
	return (1);
}

int     arguments_are_integers(char **arguments)
{
        int     i;
	int	nb;

        i = 0;
        while (arguments[i])
        {
                nb = ft_atoi(arguments[i]);
		if (nb > 2147483647 || nb < -2147483648)
                {
                        return (0);
                }
                i++;
        }
        return (1);
} 

int	ft_check_arguments(char **arguments)
{
	int	i;

	i = 0;
	if (!arguments_are_numbers(arguments))
		return (0);
	if (!arguments_are_integers(arguments))
		return (0);
	if (ft_there_is_dup(arguments))
		return (0);
	if (ft_is_in_ascending_order(arguments))
		return (0);
	return (1);
}

int	ft_size(char **arguments)
{
	int	i;

	i = 0;
	while (arguments[i])
		i++;
	return (i);
}
