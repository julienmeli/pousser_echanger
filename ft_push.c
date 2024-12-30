#include "push_swap.h"

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr;
	t_list	*new;
	int	n;
	
	n = (*stack_a)->nb;
	new = ft_lstnew(n);
	ft_lstadd_front(stack_b, new);
	ptr = *stack_a;
	*stack_a = (*stack_a)->next;
	free(ptr);
	ft_putstr("pb\n");
}

void    ft_pa(t_list **stack_b, t_list **stack_a)
{
        t_list  *ptr;
        t_list  *new;
        int     n;

        n = (*stack_b)->nb;
        new = ft_lstnew(n);
        ft_lstadd_front(stack_a, new);
        ptr = *stack_b;
        *stack_b = (*stack_b)->next;
        free(ptr);
	ft_putstr("pa\n");
}

