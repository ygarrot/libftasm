# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/07 11:09:55 by ygarrot           #+#    #+#              #
#    Updated: 2018/12/07 14:49:56 by ygarrot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = LibftASM.a

SRC_DIR = src
OBJ_DIR = obj
#INC_DIR = includes

SRC = ft_bzero.s

SRCS = $(addprefix $(SRC_DIR)/, $(SRC))

OBJS = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(basename $(SRC))))

OBJ_FILES = $(sort $(dir $(OBJS)))

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

NASM_CMD = nasm -f macho64 -g

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.s
	echo OBJ_FILES
	mkdir -p $(OBJ_FILES) || true
	$(NASM_CMD) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re $(NAME)
