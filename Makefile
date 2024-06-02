NAME = push_swap

SRC = radix_bin.c error.c push_swap.c sort.c stack.c \
	  instructions0.c instructions1.c instructions2.c instructions3.c \

OBJS = $(SRC:.c=.c)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
		@$(MAKE) -C ./libft
		@$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a -o $(NAME)

clean:
		make clean -C libft
		@$(RM) *.o

fclean: clean
		make fclean -C libft
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re