/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:43:56 by jmeli             #+#    #+#             */
/*   Updated: 2024/07/15 13:49:03 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while (j < size -1)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i +1] < tab[i])
			{
				temp = tab [i];
				tab[i] = tab[i +1];
				tab[i +1] = temp;
			}
			i++;
		}
		j++;
	}
}
/*
#include <stdio.h>
int main()
{
	int 	tab[] = {10,9,7,4,1,3,2,5,3,6,4,7,6,5,4,3,2,3,4,6,8,10,12};
	int k;
	k=0;
	while (k<23)
	{
		printf("%d,", tab[k]);
		k++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 23);
	k=0;
        while (k<23)
        {
                printf("%d,", tab[k]);
                k++;
        }
}
*/
