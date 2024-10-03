# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 10:12:56 by fcarranz          #+#    #+#              #
#    Updated: 2024/10/03 18:18:04 by fcarranz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=megaphone
OBJ_DIR=objs/
DEP_DIR=deps/
CC=g++
CFLAGS=-Wall -Wextra -Werror -std=c++98
OBJ_FLAGS = $(CFLAGS) -MMD -g -c

SRC=megaphone.cpp
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

OBJS= $(addprefix $(OBJ_DIR), $(OBJ))
DEPS= $(addprefix $(DEP_DIR), $(DEP))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): Makefile $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(OBJ_DIR) $(DEP_DIR)
	$(CC) $(OBJ_FLAGS) $< -o $@
	@mv $(@:.o=.d) $(DEP_DIR)

clean:
	rm -rf $(OBJ_DIR) $(DEP_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)
