/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:39:05 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/31 11:05:24 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_only_3(t_list **stack_a)
{
	int	one;
	int	two;
	int	three;

	one = (*stack_a)->nb;
	two = (*stack_a)->next->nb;
	three = (*stack_a)->next->next->nb;
	if (one == 1 || ((one == 2) && (three == 1)))
		ft_rra(stack_a);
	one = (*stack_a)->nb;
	if (one == 3)
		ft_ra(stack_a);
	one = (*stack_a)->nb;
	if (one == 2)
                ft_sa(stack_a);

}

void	ft_5_positions(t_list **stack_a, int *one, int *two, int *three, int *four, int *five)
{
	*one = (*stack_a)->nb;
	*two = (*stack_a)->next->nb;
	*three = (*stack_a)->next->next->nb;
	*four = (*stack_a)->next->next->next->nb;
	*five = (*stack_a)->next->next->next->next->nb;  
}
void	ft_2_in_stack_b(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_b)->nb < (*stack_b)->next->nb)
	{
		ft_pa(stack_b, stack_a);
		ft_ra(stack_a);
		ft_pa(stack_b, stack_a);
                ft_ra(stack_a);
	}
	else
	{
		ft_pa(stack_b, stack_a);
		ft_pa(stack_b, stack_a);
                ft_ra(stack_a);
		ft_ra(stack_a);
	}
}

void	ft_sort_only_5(t_list **stack_a, t_list **stack_b)
{
	int	one;
	int	two;
	int	three;
	int	four;
	int	five;

	ft_5_positions(stack_a, &one, &two, &three, &four, &five);
	if (((four == 4) && (five == 5)) || ((four == 5) && (five == 4)))
	{
	       ft_rra(stack_a);	
	       ft_rra(stack_a);
	       ft_pb(stack_a, stack_b);
	       ft_pb(stack_a, stack_b);
	}
	if (((three == 4) && (four == 5)) || ((three == 5) && (four == 4)))
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
               ft_rra(stack_a);
               ft_pb(stack_a, stack_b);
               ft_pb(stack_a, stack_b);
	}
	if (((three == 4) && (five == 5)) || ((three == 5) && (five == 4)))
        {
                ft_rra(stack_a);
               ft_pb(stack_a, stack_b);
	       ft_rra(stack_a);
		ft_rra(stack_a);
               ft_pb(stack_a, stack_b);
        }
	if (((two == 4) && (three == 5)) || ((two == 5) && (three == 4)))
	{
		ft_ra(stack_a);
               ft_pb(stack_a, stack_b);
               ft_pb(stack_a, stack_b);
	}
	if (((two == 4) && (four == 5)) || ((two == 5) && (four == 4)))
        {
                ft_ra(stack_a);
               ft_pb(stack_a, stack_b);
               ft_ra(stack_a);
               ft_pb(stack_a, stack_b);
        }
	if (((two == 4) && (five == 5)) || ((two == 5) && (five == 4)))
        {
                ft_rra(stack_a);
               ft_pb(stack_a, stack_b);
               ft_ra(stack_a);
               ft_pb(stack_a, stack_b);
        }
	if (((one == 4) && (two == 5)) || ((one == 5) && (two == 4)))
        {
               ft_pb(stack_a, stack_b);
               ft_pb(stack_a, stack_b);
        }
	if (((one == 4) && (three == 5)) || ((one == 5) && (three == 4)))
        {
               ft_pb(stack_a, stack_b);
               ft_ra(stack_a);
               ft_pb(stack_a, stack_b);
        }
	if (((one == 4) && (four == 5)) || ((one == 5) && (four == 4)))
        {
               ft_pb(stack_a, stack_b);
               ft_rra(stack_a);
                ft_rra(stack_a);
               ft_pb(stack_a, stack_b);
        }
	if (((one == 4) && (five == 5)) || ((one == 5) && (five == 4)))
        {
               ft_pb(stack_a, stack_b);
               ft_rra(stack_a);
               ft_pb(stack_a, stack_b);
        }
	ft_sort_only_3(stack_a);
        ft_2_in_stack_b(stack_a, stack_b);
}

void	ft_algo(t_list **stack_a, t_list **stack_b)
{
	int	size;
	
	(void)stack_b;
	size = ft_lstsize(*stack_a);
	if (size == 3)
	{
		ft_sort_only_3(stack_a);
		return ;
	}
	if (size == 5)
	{
		ft_sort_only_5(stack_a, stack_b);
		return ;
	}
}
