/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_6_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:24:48 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/07 13:15:43 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_6_b(t_list **stack_b, int max_six)
{
	int	size_b;
	int	min;
	int	mid;
	int	max;
	int	one;
	int	two;
	t_list	*last;
	int	last_nb;

	min = max_six;
	mid = min + 2;
	max = max_six + 5;
	printf("%d %d %d\n", min, mid, max);
	size_b = ft_lstsize(*stack_b);
	if (size_b < 2)
		return ;
	one = (*stack_b)->nb;
	two = (*stack_b)->next->nb;
	last = ft_lstlast(*stack_b);
	last_nb = last->nb;
	if ((one <= max && one > mid) || (two <= mid && two >= min))
		ft_sb(stack_b);
	else if ((last_nb <= mid && last_nb >= min) && ((one <= mid && one >= min) || (two <= mid && two >= min)))
		return ;
	else if ((one <= mid && one >= min) || (two <= mid && two >= min))
		ft_rb(stack_b);
	else if ((one > mid) && ((two <= max) && (two > mid)) && (last_nb >= min && last_nb <= mid))
		ft_rrb(stack_b);

}

void	ft_6_algo(t_list **stack_a, t_list **stack_b)
{
	int	max;
	int	size_a;
	int	size_anchor;
	int	nb;
	
	size_a = ft_lstsize(*stack_a);
	if (size_a - 6 > 0)
		size_anchor = size_a - 6;
	else
		size_anchor = 0;
	while (size_a > 3)
	{
		//we will push numbers by groups of 6
	        max = ft_find_max(stack_a) - 5;
		while (size_a > size_anchor && size_a > 3)
		{
			nb = (*stack_a)->nb;
                	if (nb >= max && nb > 3)
			{
                        	ft_pb(stack_a, stack_b);
				ft_sort_6_b(stack_b, max);
			}
			else
				ft_ra(stack_a);
			ft_print_stack(*stack_a, *stack_b);
			size_a = ft_lstsize(*stack_a);
		}
		if (size_a - 6 > 0)
        	        size_anchor = size_a - 6;
	        else
			size_anchor = 0;

	}

}
