/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:01:09 by jmeli             #+#    #+#             */
/*   Updated: 2024/12/31 09:09:52 by jmeli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_in_ascending_order(char **arguments)
{
	int	i;

	i = 0;
	while (arguments[i + 1])
	{
		if (ft_atoi(arguments[i]) > ft_atoi(arguments[i + 1]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int     ft_there_is_dup(char **arguments)
{
        int     i;
        int     j;

        i = 0;
        while (arguments[i])
        {
                j = 1;
                while (arguments[i + j])
                {
                        if (ft_atoi(arguments[i]) == ft_atoi(arguments[i + j]))
                                return (1);
                        j++;
                }
                i++;
        }
        return (0);
}

static char     *ft_strdup_len(char const *s, int len)
{
        char    *string;
        int             j;

        string = (char *)malloc((len + 1) * sizeof(char const));
        if (string == 0)
                return (NULL);
        j = 0;
        while (j < len)
        {
                string[j] = s[j];
                j++;
        }
        string[j] = '\0';
        return (string);
}

static char     **ft_free(char **array, int i)
{
        while (i >= 0)
        {
                free(array[i]);
                i--;
        }
        free(array);
        return (NULL);
}

char	**ft_array(int argc, char **argv)
{
	char	**array;
	int	i;
	int	len;


	if (argc == 2)
		array = ft_split(argv[1], ' ');
	else
	{
		array = malloc((argc) * sizeof(*argv));
		i = 0;
		while (i < argc - 1)
		{
			len = ft_strlen(argv[i + 1]);
			array[i] = ft_strdup_len(argv[i + 1], len);
			if (array[i] == NULL)
				return (ft_free(array, i));
			i++;
		}
		array[i] = NULL;
	}
	return (array);
}




