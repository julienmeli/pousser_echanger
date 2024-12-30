CC := cc
CFLAGS := -Wall -Wextra -Werror
SRCDIR := .
OBJDIR := $(SRCDIR)
NAME := libpush.a
SRC := ft_half_simple_algo.c ft_6_algo.c ft_sort_int_tab.c ft_index.c ft_measures.c ft_1_algo.c ft_simple_algo.c ft_reverse_rotate.c ft_rotate.c ft_swap.c ft_push.c ft_strlen.c ft_isdigit.c ft_checks.c ft_isnumber.c ft_split.c push_swap_utils_print.c push_swap_utils.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c

OBJ := $(SRC:.c=.o)
all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs	$@ $^

$(OBJDIR)/%.o : $(SRCDIR)/%.c | $(OBDJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

main:
	$(CC) $(CFLAGS) main.c -L. -lpush

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all

$(OBJDIR):
	mkdir -p $@

.PHONY: all clean fclean re
