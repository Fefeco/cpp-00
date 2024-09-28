# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 12:34:34 by fedeito           #+#    #+#              #
#    Updated: 2024/09/28 18:50:11 by fcarranz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_FLAGS = -Iinc -MMD -g

SRC = main.cpp \
	  PhoneBook.cpp \
	  Contact.cpp \
	  Messages.cpp

OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)

OBJ_DIR = objs/
DEP_DIR = deps/

OBJS = $(addprefix $(OBJ_DIR), $(OBJ))
DEPS = $(addprefix $(DEP_DIR), $(DEP))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS) Makefile
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ_DIR)%.o: %.cpp
	mkdir -p $(OBJ_DIR) $(DEP_DIR)
	$(CC) $(CFLAGS) $(OBJ_FLAGS) -c $< -o $@
	mv $(@:.o=.d) $(DEP_DIR)

clean:
	@rm -rf $(OBJ_DIR) $(DEP_DIR)

fclean: clean
	@rm $(NAME)

re: fclean $(NAME)

-include $(DEPS)
