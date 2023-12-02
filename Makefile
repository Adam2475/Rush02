CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRC = main.c utils.c ft_split.c \
	args_formatter.c check_args.c find_algo.c \
	ft_atoi.c \
	
OBJ = $(SRC:.cpp=.o)
EXE = Rush02

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJ) $(EXE)
