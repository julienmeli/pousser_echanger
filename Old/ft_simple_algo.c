/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:08:35 by jmeli             #+#    #+#             */
/*   Updated: 2024/11/30 09:42:56 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min(t_list *stack)
{
        t_list	*current;
        int     min;

	if (stack == NULL)
		return (2147483647);	
	min = 2147483647;
	current = stack;
	printf("Check current %d\n", current->nb);
        while (current != NULL)
        {
                printf("comprends rien %d\n", current->nb);
		if (current->nb < min)
			min = current->nb;
                current = current->next;
        }
	return (min);
}

void	ft_simple_algo(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int	nb;
	int	i = 9;
	t_list  *ptr;
	
	while (i >= 0)
	{
		ptr = *stack_a;
        	while (ptr)
        	{
                	ft_putnbr(ptr->nb);
                	ptr = ptr->next;
        	}
		min = ft_find_min(*stack_a);
		nb = (*stack_a)->nb;
		printf("check %d %d\n", min, nb);
		if (nb == min)
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a);
		i--;
	}
}
