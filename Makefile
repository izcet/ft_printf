# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/20 19:43:49 by irhett            #+#    #+#              #
#    Updated: 2018/01/18 20:26:08 by irhett           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -c
LIB			=	ar rc
RLIB		=	ranlib

SRC_DIR		=	src
SRC_FILE	=	ft_printf.c \
				printf_error.c \
				handle_string_fd.c \
				handle_others_fd.c \
				collect_flags.c \
				select_conv.c \
				conversions.c \
				conv_color.c \
				conv_integer.c \
				conv_long.c \
				conv_other.c \
				conv_string.c \
				conv_percent.c \

SRCS		=	$(addprefix $(SRC_DIR)/, $(SRC_FILE))

OBJ_DIR		=	obj
OBJ_FILE	=	$(SRC_FILE:.c=.o)
OBJS		=	$(addprefix $(OBJ_DIR)/, $(OBJ_FILE))

LIBFT_DIR	=	libft
LIBFT_LIB	=	libft.a
LIBFT_INC	=	inc
LIBFT		=	$(LIBFT_DIR)/$(LIBFT_LIB)

INC_DIR		=	-I $(LIBFT_DIR)/$(LIBFT_INC) -I inc

.PHONY: libft all clean fclean re

all: $(LIBFT) $(NAME)

$(NAME): $(SRCS) | $(OBJS)
	@$(LIB) $@ $(OBJS)
	$(RLIB) $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) -c $^ $(CFLAGS) $(INC_DIR) -o $@

clean:
	@cd $(LIBFT_DIR) && make clean
	@rm -rf $(OBJ_DIR)

fclean: clean
	@cd $(LIBFT_DIR) && make fclean
	@rm -f $(NAME)

re: fclean all

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)
