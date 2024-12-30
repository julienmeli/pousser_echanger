/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:14:47 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/02 15:13:32 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_3_check(t_list **stack_a, int max, int min)
{
	t_list *p;

	p = ft_lstlast(*stack_a);
	if ((*stack_a)->nb == min && p->nb == max)
		return (1);
	else
		return (0);
}

void	ft_base_case_3(t_list **stack_a)
{
	int	max;
	int	min;
	t_list	*ptr;
	
	ptr = ft_lstlast(*stack_a);
	max = ft_find_max(stack_a);
	min = ft_find_min(stack_a);
	if ((*stack_a)->nb == max)
	{
		ft_ra(stack_a);
		if (ft_3_check(stack_a, max, min))
			return ;
	}
	if (ptr->nb == min || (*stack_a)->nb == min)
	{
		ft_rra(stack_a);
		if (ft_3_check(stack_a, max, min))
                        return ;
	}
	if ((*stack_a)->nb != min && (*stack_a)->nb != max)
	{
		ft_sa(stack_a);
		if (ft_3_check(stack_a, max, min))
                        return ;
	}
}

void	ft_2_algo(t_list **stack_a, t_list **stack_b)
{
	int	size_a;
	int	size_b;
	int	div;
	int	div1;
	int	i;
	t_list	*ptr;

	size_a = ft_lstsize(*stack_a);
	size_b = ft_lstsize(*stack_b);
	if (ft_checkos(*stack_a) && size_b == 0)
	{
		return ;
	}
	if (size_a == 3)
	{
		ft_base_case_3(stack_a);
		i = 0;
		while (i < 3)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
			i++;
		}
		i = 0;
		while (i < 6 && size_b != 0)
		{
			ft_pa(stack_b, stack_a);
			size_b = ft_lstsize(*stack_b);
			i++;
		}
	}
	div = size_a / 3;
	div1 = div * 2;
	i = 0;
	ptr = *stack_a;
	while (i < size_a && size_a > 2)
	{
		if (ptr->nb <= div)
		{
			ft_pb(stack_a, stack_b);
			ft_rb(stack_b);
		}
		else if (ptr->nb <= div1)
		{
			ft_pb(stack_a, stack_b);
		}
		else
			ft_ra(stack_a);
		size_a = ft_lstsize(*stack_a);
		i++;
	}
	ft_2_algo(stack_a, stack_b);

}
