CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRC = main.c utils.c ft_split.c \
	args_formatter.c check_args.c find_algo.c \
	ft_atoi.c ft_one_arg.c ft_two_arg.c \
	
OBJ = $(SRC:.c=.o)
NAME = Rush02
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm - $(NAME)
