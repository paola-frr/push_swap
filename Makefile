SRCS = ./push.c\
				 ./check_input.c\
				 ./check_input_utils.c\
				 ./main.c\
				 ./push_swap_algorithm.c\
				 ./push_swap_algorithm_utils.c\
				 ./rotate.c\
				 ./reverse_rotate.c\
				 ./sort_small.c\
				 ./sort_tab.c\
				 ./swap.c\

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS =-g3  -Wall -Werror -Wextra

NAME = push_swap

all:${NAME}

${NAME}:${OBJS}
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f ${OBJS}

fclean: clean
		rm -f $(NAME)

re: fclean	all

.PHONY: all clean fclean re

