/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:45:01 by jmeli             #+#    #+#             */
/*   Updated: 2024/11/30 09:35:46 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	char	**arguments;
	t_list	*stack_a;
	t_list	*stack_b;
	static	int	size_a;

	if (argc < 1)
		return (1);
	arguments = ft_split(argv[1], ' ');
	i = 1;
	//Measure size and check that arguments are all numbers
	while (arguments[i])
	{
		if (ft_isnumber(arguments[i]) == 0)
		{
			ft_putstr("Incorrect input. Enter only numbers.");
			return (1);
		}
		i++;
	}
	size_a = i;
	//Check for duplicates
	if (ft_there_is_dup(arguments, size_a)!= 0)
        {
                ft_putstr("We got a replicant!! Abort! Abort! Abort!");
                return (1);
        }
	//check ascending order:
        if (ft_is_in_ascending_order(arguments, size_a))
        {
                ft_putstr("The Order prevails.");
                return (1);
        }
	// change array of strings into list of integers;
	stack_a = ft_atoi_list(arguments, size_a);
	//Free arguments;
	i = 0;
	while (i < size_a)
	{
		free(arguments[i]);
		i++;
	}
	free(arguments);
	//Check list
	t_list	*ptr;
	ptr = stack_a;
	while (ptr)
	{
		ft_putnbr(ptr->nb);
		ptr = ptr->next;
	}
	//check the size;
//	ft_putnbr_fd(size_a, 1);
	ft_putchar('\n');
	//Initialize stack_b;
	stack_b = NULL;
//	ft_print_stack(stack_a, stack_b);
	//Simple algorithm
	ft_simple_algo(&stack_a, &stack_b);
	ft_print_stack(stack_a, stack_b);
//	ft_putnbr((stack_a)->nb);
//	ft_ra(&stack_a);
//	ft_putnbr((stack_a)->nb);
/*	//Swap the first 2 elements at the top of stack a;
	ft_sa(stack_a);
	//Check sa
	ft_print_stack(stack_a, stack_b, size_a);
	//Rotate stack a. 1st element becomes the last;
        ft_ra(stack_a, size_a);
        //Check ra
        ft_print_stack(stack_a, stack_b, size_a);
	//Reverse rotate stack a. Last element becomes the 1st.
	ft_rra(stack_a, size_a);
	//Check rra
        ft_print_stack(stack_a, stack_b, size_a);*/
	//transfer 1st element of stack a into stack b
/*	ft_pb(&stack_a, &stack_b);
	ft_pb(&stack_a, &stack_b);
	ft_pb(&stack_a, &stack_b);
	ft_pb(&stack_a, &stack_b);
	ft_print_stack(stack_a, stack_b);
	ft_swap_a(&stack_a);
	ft_print_stack(stack_a, stack_b);
	ft_pb(&stack_a, &stack_b);
	ft_print_stack(stack_a, stack_b);
	ft_swap_b(&stack_b);
	ft_print_stack(stack_a, stack_b);
	ft_ss(&stack_a, &stack_b);
	ft_print_stack(stack_a, stack_b);
	ft_pa(&stack_b, &stack_a);
	ft_print_stack(stack_a, stack_b);	
        ft_ra(&stack_a);	
	ft_print_stack(stack_a, stack_b);
	ft_rra(&stack_a);
       	ft_print_stack(stack_a, stack_b);
	ft_rr(&stack_a, &stack_b);
	ft_print_stack(stack_a, stack_b);
	ft_rrr(&stack_a, &stack_b);
        ft_print_stack(stack_a, stack_b);*/	
}
