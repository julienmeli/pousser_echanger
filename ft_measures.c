#include "push_swap.h"

int     ft_find_min(t_list **stack)
{
        t_list  *current;
        int     min;

        if (stack == NULL)
                return (2147483647);
        min = 2147483647;
        current = *stack;
        while (current != NULL)
        {
                if (current->nb < min)
                        min = current->nb;
                current = current->next;
        }
        return (min);
}

int     ft_find_max(t_list **stack)
{
        t_list  *current;
        int     max;

        if (stack == NULL)
                return (2147483647);
        max = -2147483648;
        current = *stack;
        while (current != NULL)
        {
                if (current->nb > max)
                        max = current->nb;
                current = current->next;
        }
        return (max);
}

int	ft_find_med(t_list **stack)
{
	int	max;
	int	min;

	max = ft_find_max(stack);
	min = ft_find_min(stack);
	return ((max + min)/ 2);
}
