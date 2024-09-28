# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fedeito <fcarranz@student.42barcel>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 12:34:34 by fedeito           #+#    #+#              #
#    Updated: 2024/09/28 13:53:33 by fedeito          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_FLAGS = -MMD -g

SRC = main.cpp /
	  PhoneBook.cpp /
	  Contact.cpp /
	  Messages.cpp

OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)

OBJ_DIR = objs/
DEP_DIR = deps/

OBJS = $(addprefix OBJ_DIR, $(OBJ))
DEPS = $(addprefix DEP_DIR, $(DEP))

-include: $(DEP)
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS) Makefile
	$(CC) $(CFLAGS) $< -Iinc -o $@

$(OBJ_DIR)%.o: %.cpp
	$(CC) $(CFLAGS) $(OBJ_FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR) $(DEP_DIR)

fclean: clean
	@rm $(NAME)

re: fclean $(NAME)
