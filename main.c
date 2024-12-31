/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:45:01 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/31 09:53:28 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**arguments;
	int	*tab;
	t_list	*stack_a;
	t_list	*stack_b;
	static	int	size_a;

	if (argc < 2)
		return (1);
	arguments = ft_array(argc, argv);
	//Check that arguments are all numbers, integers, not duplicates, not in ascending order
	if (!ft_check_arguments(arguments))
	{
		ft_putstr("Error\n");
		return (0);
	}
	size_a = ft_size(arguments);
	tab = ft_turn_into_integers(arguments, size_a);
	tab = ft_index(tab, size_a);
	// change array of strings into list of integers;
	stack_a = ft_atoi_list(tab, size_a);
	//Free arguments;
	ft_free_arg(arguments);
	ft_putchar('\n');
	//Initialize stack_b;
	stack_b = NULL;
	//Simple algorithm
	ft_algo(&stack_a, &stack_b);
	ft_print_stack(stack_a, stack_b);
	return (0);
}
