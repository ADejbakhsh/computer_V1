FUNC = main.c

SRC_DIR = ./src/

SRC = $(addprefix $(SRC_DIR), $(FUNC))

OBJS = ${FUNC:c=o}

NAME = computer_v1

INCLUDES = ./includes/

CFLAG = -Wall -Wextra -Werror

DEBUG_FLAG = $(CFLAG) -fsanitize=address -fno-omit-frame-pointer -ggdb

CC = gcc

LIB =  -L. ./libft/libft.a

.PHONY: clean all fclean re debug

all: $(NAME)

$(NAME) : $(SRC) Makefile libft/srcs
	@$(CC) $(CFLAG) -I$(INCLUDES) -c $(SRC)
	@make -C ./libft/
	@$(CC) -o $(NAME) $(OBJS) $(LIB)
	@echo "$(NAME) has been made"


force : $(SRC) Makefile libft/srcs
	@$(CC) -I$(INCLUDES) -c $(SRC)
	@make -C ./libft/
	@$(CC) -o $(NAME) $(OBJS) $(LIB)
	@echo "$(NAME) has been made"

clean :
	@rm -f $(OBJS)
	@make -C ./libft/ clean
	@echo "Objects deleted"

fclean: clean
	@rm -f $(NAME)
	@make -C ./libft/ fclean
	@echo "$(NAME) deleted"

re:  fclean all
	@echo "Remake done"

debug : $(SRC) Makefile libft/srcs
	@$(CC) $(DEBUG_FLAG) -I$(INCLUDES) -c $(SRC)
	@make -C ./libft/ debug
	@$(CC) -o $(NAME) $(OBJS) $(LIB)
	@echo "$(NAME) debug mod"