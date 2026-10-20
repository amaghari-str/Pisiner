# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/20 18:19:42 by amaghari          #+#    #+#              #
#    Updated: 2026/10/20 18:19:44 by amaghari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = test
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3
LIBFT_PATH = "../"

$(NAME): make_libft
	$(CC) $(CFLAGS) -o $(NAME) $(LIBFT_PATH)*.o main.c

make_libft:
	make bonus -C $(LIBFT_PATH)

all: $(NAME)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re
