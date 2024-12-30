/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:37:56 by jmeli             #+#    #+#             */
/*   Updated: 2024/11/29 14:15:45 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **stack)
{
	t_list	*ptr;
	t_list	*previous;
	
	//Check if the stack is empty
	if (!stack || !*stack)
		return ;
	ptr = *stack;
	while (ptr->next)
	{
		previous = ptr;
		ptr = ptr->next;
	}
	previous->next = NULL;
	ft_lstadd_front(stack, ptr);
	ft_putstr("rra\n");
}

void    ft_rrb(t_list **stack)
{
        t_list  *ptr;
        t_list  *previous;

        //Check if the stack is empty
        if (!stack || !*stack)
                return ;
        ptr = *stack;
        while (ptr->next)
        {
                previous = ptr;
                ptr = ptr->next;
        }
        previous->next = NULL;
        ft_lstadd_front(stack, ptr);
        ft_putstr("rrb\n");
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
}

