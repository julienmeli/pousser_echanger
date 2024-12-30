/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:13:27 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/02 12:39:26 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void 	ft_ra(t_list **stack)
{
	t_list	*ptr;
	int	temp;

	if (!*stack || !stack)
		return ;
	temp = (*stack)->nb;
	ptr = *stack;
	while (ptr->next)
	{
		ptr->nb = ptr->next->nb;
		ptr = ptr->next;
	}
	ptr->nb = temp;
//	write(2, "ra\n", 3);
	ft_putstr("ra\n");
}

void    ft_rb(t_list **stack)
{
        t_list  *ptr;
        int     temp;

        if (!*stack || !stack)
                return ;
        temp = (*stack)->nb;
        ptr = *stack;
        while (ptr->next)
        {
                ptr->nb = ptr->next->nb;
                ptr = ptr->next;
        }
        ptr->nb = temp;
	ft_putstr("rb\n");
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
	ft_putstr("rr\n");
}
