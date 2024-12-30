/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:28:51 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/02 13:00:58 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **stack)
{
	int	swap;
	
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	swap = (*stack)->nb;
	(*stack)->nb = (*stack)->next->nb;
	(*stack)->next->nb = swap;
	ft_putstr("sa\n");
}

void    ft_sb(t_list  **stack)
{
        int     swap;

        if (*stack == NULL || (*stack)->next == NULL)
                return ;
        swap = (*stack)->nb;
        (*stack)->nb = (*stack)->next->nb;
        (*stack)->next->nb = swap;
        ft_putstr("sb\n");
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_sa(stack_a);
	ft_sb(stack_b);
	ft_putstr("ss\n");
}
