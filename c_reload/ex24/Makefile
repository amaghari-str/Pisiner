# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaghari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/14 17:00:59 by amaghari          #+#    #+#              #
#    Updated: 2026/10/14 17:01:01 by amaghari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_putchar.c \
       srcs/ft_swap.c \
       srcs/ft_putstr.c \
       srcs/ft_strlen.c \
       srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

INCLUDES = includes

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
