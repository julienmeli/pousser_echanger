#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_list
{
	int	nb;
	struct s_list	*next;
}		t_list;

void     ft_pb(t_list **stack_a, t_list **stack_b);
void     ft_pa(t_list **stack_b, t_list **stack_a);

void    ft_swap_a(t_list  **stack);
void    ft_swap_b(t_list  **stack);
void    ft_ss(t_list **stack_a, t_list **stack_b);

void    ft_ra(t_list **stack);
void    ft_rb(t_list **stack);
void    ft_rr(t_list **stack_a, t_list **stack_b);

void    ft_rra(t_list **stack);
void    ft_rrb(t_list **stack);
void    ft_rrr(t_list **stack_a, t_list **stack_b);

t_list     *ft_atoi_list(char **array, int	size_a);
void    ft_print_stack(t_list *stack_a, t_list *stack_b);
int     ft_there_is_dup(char **arguments, int size_a);

int             ft_is_in_ascending_order(char **arguments, int size_a);

void    ft_putstr(char *str);
void    ft_putnbr(int nb);
void    ft_putchar(char c);
int     ft_atoi(char *str);

char    **ft_split(char const *s, char c);

int     ft_isnumber(char *str);
int	ft_strlen(char const *str);
int	ft_isdigit(int c);

t_list  *ft_lstnew(int content);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstadd_front(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(int));
void    ft_lstclear(t_list **lst, void (*del)(int));

int     ft_find_min(t_list *stack);
void    ft_simple_algo(t_list **stack_a, t_list **stack_b);

#endif
