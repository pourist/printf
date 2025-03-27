# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppour-ba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/04 21:11:36 by ppour-ba          #+#    #+#              #
#    Updated: 2023/06/04 21:11:40 by ppour-ba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libftprintf.a
LIBFT_DIR   = ./Libft
LIBFT_NAME  = libft.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror

SRC_DIR     = src
SRCS        = ft_printf.c ft_putchar.c ft_putstr.c forp.c \
              forc.c fordi.c foru.c ft_putnbr.c fors.c forx.c
OBJS        = $(addprefix $(SRC_DIR)/, $(SRCS:.c=.o))

INCLUDES    = -Iinclude -I$(SRC_DIR) -I$(LIBFT_DIR)


all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/$(LIBFT_NAME) $(NAME)
	@ar rcs $(NAME) $(OBJS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

test: $(NAME)
	$(CC) $(CFLAGS) -I$(SRC_DIR) -o test main.c $(NAME)

clean:
	@rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re test
