/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:28:38 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/31 09:31:52 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_arg(char **arguments)
{
	int	i;

	i = 0;
	while (arguments[i])
	{
		free(arguments[i]);
		i++;
	}
	free(arguments);
}
