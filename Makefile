# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/07 11:09:55 by ygarrot           #+#    #+#              #
#    Updated: 2018/12/09 12:25:53 by ygarrot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = LibftASM.a

SRC_DIR = src
OBJ_DIR = obj
TEST_DIR = test

SRC = ft_bzero.s \
	  ft_isalpha.s \
	  ft_toupper.s \
	  ft_islower.s \
	  ft_isupper.s \
	  ft_basic.s \
	  ft_strlen.s \
	  ft_puts.s

TEST_EXEC = test_e

NASM_CMD = nasm -f macho64 -g
CC_FLAGS = -Wall -Werror -Wextra -o
SANITIZE = -fsanitize=address
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

test: re
	@gcc $(SANITIZE) $(CC_FLAGS) $(TEST_EXEC) $(TEST_DIR)/*.c -I test/includes/ $(NAME)
	@./$(TEST_EXEC)

.PHONY: all clean fclean re $(NAME)
