# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmokane <mmokane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 15:48:05 by mmokane           #+#    #+#              #
#    Updated: 2022/11/08 20:30:46 by mmokane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_putchar.c ft_putnbr.c ft_putstr.c ft_print_uns.c ft_print_add.c\
	   ft_printf.c ft_print_hex.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

all : ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.phony : all clean fclean re