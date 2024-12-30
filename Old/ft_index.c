/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:07:35 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/07 11:53:11 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
typedef struct s_index
{
	int	index;
	int	value;
}		t_index;
*/
void	ft_print_tabs(int *tab, t_index *tabs, int size)
{
	int	k;

	k = 0;
	while (k < size)
	{
		printf("index: %d, tab[index]: %d, tabs.index: %d, tabs.value: %d\n", k, tab[k], tabs[k].index, tabs[k].value);
		k++;
	}
	write(1, "\n", 1);
}

void	ft_index(t_list **stack)
{
	t_index	*numbers;
	t_list	*ptr;
	int	i;
	int	*tab;
	int	size;
	int	j;
	
	size = ft_lstsize(*stack);
	tab = malloc(size * sizeof(int));
	if (!tab)
		return ;
	numbers = malloc (size * sizeof(t_index));
	if (!numbers)
		return ;
	ptr = *stack;
	i = 0;
	while(i < size)
	{
		numbers[i].index = i;
		numbers[i].value = ptr->nb;
		tab[i] = ptr->nb;
		ptr = ptr->next;
		i++;
	}
	ft_print_tabs(tab, numbers, size);
	ft_sort_int_tab(tab, size);
	ft_print_tabs(tab, numbers, size);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (numbers[i].value == tab[j])
			{
				numbers[i].value = j + 1;
			}
			j++;
		}
		i++;
	}
	ft_print_tabs(tab, numbers, size);
	ptr = *stack;
	i = 0;
	while (i < size)
	{
		ptr->nb = numbers[i].value;
		ptr = ptr->next;
		i++;
	}
	ft_print_tabs(tab, numbers, size);
}
