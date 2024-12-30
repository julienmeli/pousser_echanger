/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:19:33 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/07 12:17:31 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	long long int	result;
	int	sign;

	sign = 1;
	while ((*str >= 9 && *str <= 13) && *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = - sign;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	if (((sign * result) > 2147483647) || ((sign * result) < -2147483648))
	{
		write(1, "Error\n", 6);
		exit (1);
	}
	return (sign * result);
}	

t_list	*ft_atoi_list(int *tab, int size_a)
{
        t_list	*new;
	t_list	*stack_a;
	int	i;

	if (!tab || !size_a)
		return (NULL);
	stack_a = ft_lstnew(tab[0]);
	i = 1;
	while (i < size_a)
	{
		new = ft_lstnew(tab[i]);
		ft_lstadd_back(&stack_a, new);
		i++;
	}
	return (stack_a);	
}

