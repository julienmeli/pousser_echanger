/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_half_simple_algo.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:18:29 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/06 14:39:26 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     ft_checkos(t_list *stack_a)
{
        t_list *ptr;

        ptr = stack_a;
        while (ptr->next)
        {
                if (ptr->nb > ptr->next->nb)
                        return (0);
                ptr = ptr->next;
        }
        return (1);
}

void	ft_simple_shit(t_list **stack_a)
{
	int	size_a;
	int	i;

	i = 0;
	size_a = ft_lstsize(*stack_a);
	if (size_a == 1)
		return ;
	while (ft_checkos(*stack_a) != 1 && i < size_a) 
	{
		if ((((*stack_a)->nb) - ((*stack_a)->next->nb)) == 1 || (((*stack_a)->nb) - ((*stack_a)->next->nb)) == (1 - size_a))
			ft_sa(stack_a);
		ft_ra(stack_a);
		i++;
	}
}

void	ft_also_simple(t_list **stack_b, t_list **stack_a)
{
	int	min;
	int	size_b;

	size_b = ft_lstsize(*stack_b);
	while (size_b > 0)
	{
		min = ft_find_min(stack_b);
		while ((*stack_b)->nb != min)
			ft_rb(stack_b);
		ft_pa(stack_b, stack_a);
		printf("Infinite loop:\n");
		ft_ra(stack_a);
		size_b = ft_lstsize(*stack_b);
	}
}

void	ft_half_simple_algo(t_list **stack_a, t_list **stack_b)
{
	int	median;
	int	size_a;
	int	size_b;
	int	i;
	int	med;

	median = ft_find_med(stack_a);
	size_a = ft_lstsize(*stack_a);
	size_b = ft_lstsize(*stack_b);
	if (size_a > 2)
	{
		i = 0;
		while (i < size_a)
		{
			if ((*stack_a)->nb > median)
			{
                        	ft_pb(stack_a, stack_b);
				size_b = ft_lstsize(*stack_b);
				if (size_b > 1)
				{
					med = ft_find_med(stack_b);
					if ((*stack_b)->nb < med)
						ft_rb(stack_b);
				}
			}
                	else
                		ft_ra(stack_a);
			i++;
		}
		ft_half_simple_algo(stack_a, stack_b);
		ft_half_simple_algo(stack_a, stack_b);
	}
//	ft_simple_shit(stack_a);
//	ft_also_simple(stack_b, stack_a);
}

void	ft_half_shit(t_list **stack_a, t_list **stack_b)
{
	int	size_b;

	size_b = ft_lstsize(*stack_b);
	if ((*stack_a)->nb > (*stack_a)->next->nb)
                ft_sa(stack_a);
        while (size_b > 0)
        {
                ft_pa(stack_b, stack_a);
		if ((*stack_a)->nb > (*stack_a)->next->nb)
                	ft_ra(stack_a);
                size_b = ft_lstsize(*stack_b);
        }
}
