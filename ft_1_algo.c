#include "push_swap.h"

t_list	*ft_list_at(t_list *lst, int nbr)
{
	t_list	*ptr;
	int	i;
 
	ptr = lst;
	i = 1;
	while (i <= nbr)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}

void    ft_tidy_a(t_list **stack)
{
        int     median;

        if (ft_lstsize(*stack) < 2)
                return ;
        median = ft_find_med(stack);
        if ((*stack)->nb > median)
                ft_ra(stack);
}

void	ft_tidy(t_list **stack)
{
	int	median;

	if (ft_lstsize(*stack) < 2)
		return ;
	median = ft_find_med(stack);
	if ((*stack)->nb < median)
		ft_rb(stack);
}

int	ft_checkos(t_list *stack_a)
{
	t_list *ptr;

	ptr = stack_a;
	ft_putnbr(ft_lstsize(stack_a));
	while (ptr->next)
	{
		ft_putstr("Beginning loop checkos\n");
		if (ptr->nb > ptr->next->nb)
			return (0);
		ptr = ptr->next;
		ft_putstr("End loop checkos\n");
	}
	return (1);
}

void	ft_1_algo(t_list **stack_a, t_list **stack_b)
{
	int	size_a;
	int	i;
	int	median;
//	t_list	*ptr;

	size_a = ft_lstsize(*stack_a);
	if (ft_checkos(*stack_a))
			return ;
	if ((*stack_a)->nb > (*stack_a)->next->nb)
                        ft_sa(stack_a);
	if (size_a == 0)
	{
		ft_1_algo_b(stack_b, stack_a);
	}
	median = ft_find_med(stack_a);
	ft_putnbr(median);
	ft_putnbr(ft_lstsize(*stack_b));
	i = 0;
	while (i <= size_a)
	{
		if ((*stack_a)->nb > median)
			ft_pb(stack_a, stack_b);
		else
		{
			ft_ra(stack_a);
			ft_tidy(stack_b);
		}
		i++;
	}
	ft_1_algo(stack_a, stack_b);
}

void    ft_1_algo_b(t_list **stack_b, t_list **stack_a)
{
        int     size_b;
        int     i;
        int     median;
//      t_list  *ptr;

        size_b = ft_lstsize(*stack_b);
        if ((*stack_b)->nb < (*stack_b)->next->nb)
                        ft_sb(stack_b);
        if (size_b == 0)
        {
                if (!ft_checkos(*stack_a))
			return ;
		ft_1_algo(stack_a, stack_b);
        }
        median = ft_find_med(stack_b);
//        ft_putnbr(median);
//        ft_putnbr(ft_lstsize(*stack_a));
        i = 0;
        while (i <= size_b)
        {
                if ((*stack_b)->nb > median)
                        ft_pa(stack_b, stack_a);
                else
                {
                        ft_rb(stack_b);
                        ft_tidy_a(stack_a);
                }
                i++;
        }
        ft_1_algo_b(stack_b, stack_a);
}

