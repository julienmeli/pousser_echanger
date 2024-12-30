/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_print.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 08:48:52 by jmeli             #+#    #+#             */
/*   Updated: 2024/11/30 09:17:04 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void    ft_print_stack(t_list *stack_a, t_list *stack_b)
{
        t_list	*p_a;
	t_list	*p_b;

        if (!stack_a && !stack_b)
                return ;
	p_a = stack_a;
	p_b = stack_b;
        ft_putstr("Init a and b:\n");
        while (p_a || p_b)
        {
		if (p_a != NULL)
			ft_putnbr(p_a->nb);
                ft_putchar(' ');
		if (p_b != NULL)
                	ft_putnbr(p_b->nb);
                ft_putchar('\n');
		if (p_a != NULL)
			p_a = p_a->next;
		if (p_b != NULL)
			p_b = p_b->next;
        }
        ft_putstr("- -\n");
        ft_putstr("a b\n");
}





