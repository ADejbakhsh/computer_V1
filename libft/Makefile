# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/18 16:17:27 by adejbakh          #+#    #+#              #
#    Updated: 2019/02/18 16:17:35 by adejbakh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNC =  ft_atoi.c\
  ft_strcat.c\
  ft_strchr.c\
  ft_strcmp.c\
  ft_strcpy.c\
  ft_strdup.c\
  ft_strlcat.c\
  ft_strlen.c\
  ft_strnew.c\
  ft_strdel.c\
  ft_strsub.c\
  ft_itoa.c\
  ft_putstr.c\
  ft_putendl.c\
  ft_putnbr.c\
  ft_putchar.c\
  ft_putstr_fd.c\
  ft_strcspn.c\
  ft_str_contain_only.c\
  ft_putin.c\
  ft_cut_before_last_cara.c\
  ft_int_tab.c\
  ft_sort_argv.c\
  argv_to_tab.c\
  argv_without_option.c\

SRC_DIR = srcs/

SRC = $(addprefix $(SRC_DIR), $(FUNC))

OBJS = $(FUNC:.c=.o)

NAME = libft.a

FLAG = -Wall -Wextra -Werror

DEBUG_FLAG = $(CFLAG) -fsanitize=address -fno-omit-frame-pointer -ggdb


CC = gcc

HEADERS = includes/

$(NAME) : $(SRC) Makefile $(HEADERS)libft.h
	@$(CC) $(CFLAG) -I$(HEADERS) -c $(SRC)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "$(NAME) have been made"

all: $(NAME)

clean : 
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:  fclean all

debug : $(SRC) Makefile $(HEADERS)libft.h
	@$(CC) $(DEBUG_FLAG) -I$(INCLUDES) -c $(SRC)
	@make -C ./libft/
	@$(CC) -o $(NAME) $(OBJS) $(LIB)
	@echo "$(NAME) debug mod "