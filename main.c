/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:45:01 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/18 13:56:24 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	char	**arguments;
	int	*tab;
	t_list	*stack_a;
	t_list	*stack_b;
	static	int	size_a;

	if (argc < 2)
		return (1);
	arguments = ft_split(argv[1], ' ');
	i = 1;
	//Measure size and check that arguments are all numbers
	while (arguments[i])
	{
		if (ft_isnumber(arguments[i]) == 0)
		{
			ft_putstr("Error");
			return (1);
		}
		i++;
	}
	size_a = i;
	//Check for duplicates
	if (ft_there_is_dup(arguments, size_a)!= 0)
        {
                ft_putstr("Error\n");
                return (1);
        }
	//check ascending order:
        if (ft_is_in_ascending_order(arguments, size_a))
        {
                ft_putstr("Error\n");
                return (1);
        }
	tab = ft_turn_into_integers(arguments, size_a);
	tab = ft_index(tab, size_a);
	// change array of strings into list of integers;
	stack_a = ft_atoi_list(tab, size_a);
	//Free arguments;
	i = 0;
	while (i < size_a)
	{
		free(arguments[i]);
		i++;
	}
	free(arguments);
	//check the size;
//	ft_putnbr_fd(size_a, 1);
	ft_putchar('\n');
	//Initialize stack_b;
	stack_b = NULL;
//	ft_print_stack(stack_a, stack_b);
	//Simple algorithm
	ft_simple_algo(&stack_a, &stack_b);
	ft_print_stack(stack_a, stack_b);
//	ft_ra(&stack_a);
//	ft_6_algo(&stack_a, &stack_b);
//	ft_half_shit(&stack_a, &stack_b);
//	ft_1_algo(&stack_b, &stack_a);
//	ft_1_algo(&stack_a, &stack_b);
//      ft_1_algo(&stack_b, &stack_a);
//	ft_1_algo(&stack_a, &stack_b);
	//Swap the first 2 elements at the top of stack a;
//	ft_sa(stack_a);
	//Check sa
	ft_print_stack(stack_a, stack_b);

}
