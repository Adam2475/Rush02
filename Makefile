CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRC = main.c utils.c ft_split.c \
	check_args.c \
	ft_atoi.c list_utils.c \
	
OBJ = $(SRC:.c=.o)
NAME = Rush02
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm - $(NAME)
