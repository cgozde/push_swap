NAME = push_swap

SRC = radix_bin.c error.c push_swap.c sort.c stack.c \
	  instructions0.c instructions1.c instructions2.c instructions3.c \

OBJS = $(SRC:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
		 make -C ./libft
		 $(CC) $(CFLAGS) $(OBJS) ./libft/libft.a -o $(NAME)
		 
%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		make clean -C libft
		$(RM) $(OBJS)

fclean: clean
		make fclean -C libft
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re