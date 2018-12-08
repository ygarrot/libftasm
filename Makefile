# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/07 11:09:55 by ygarrot           #+#    #+#              #
#    Updated: 2018/12/08 11:07:16 by ygarrot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = LibftASM.a

SRC_DIR = src
OBJ_DIR = obj
TEST_DIR = test
SRC = *.s
TEST_EXEC = test_e

CC_FLAGS = -Wall -Werror -Wextra -o
SANITIZE = -fsanitize=address
NASM_CMD = nasm -f macho64 -g
#INC_DIR = includes

SRCS = $(addprefix $(SRC_DIR)/, $(SRC))

OBJS = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(basename $(SRC))))

OBJ_FILES = $(sort $(dir $(OBJS)))

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.s
	@mkdir -p $(OBJ_FILES) || true
	@$(NASM_CMD) $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(TEST_EXEC)

re: fclean all

test: $(NAME) 
	@gcc $(SANITIZE) $(CC_FLAGS) $(TEST_EXEC) $(TEST_DIR)/*.c $(NAME)
	@./$(TEST_EXEC)

.PHONY: all clean fclean re $(NAME)
