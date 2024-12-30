/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:57:10 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/07 12:15:13 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_turn_into_integers(char **arguments, int size_a)
{
	int	*tab;
	int	i;

	tab = malloc(size_a * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size_a)
	{
		tab[i] = ft_atoi(arguments[i]);
		i++;
	}
	return (tab);
}

int	*ft_index(int *tab, int size)
{
	int	*num;
	int	i;
	int	j;
	int	count;
	num = malloc(size * sizeof(int));
        if (!num)
		return (NULL);
	i = 0;
	while (i < size)
	{
		j = 0;
		count = 0;
		while (j < size)
		{
			if (tab[j] <= tab[i])
				count++;
			j++;
		}
		num[i] = count;
		i++;
	}
	free(tab);
	return (num);
}
