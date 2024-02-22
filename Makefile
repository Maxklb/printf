# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/09 13:44:22 by makoch-l          #+#    #+#              #
#    Updated: 2024/02/22 23:10:21 by makoch-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC_PATH = src/
LIBFT_PATH = libft/
LIBFT_LIB = libft.a
INCLUDE_PATH = include/

SRC_FILES = src/ft_printf.c \
			src/print_pointer.c \
			src/print_unsigned.c \
			src/print_string.c \
			src/print_int.c \
			src/print_char.c \
			src/print_hex.c \
			src/print_percent.c

SRC_OBJS = $(SRC_FILES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

LIBFT_OBJS = $(LIBFT_PATH)*.o
LIBFTMAKE = $(MAKE) -C $(LIBFT_PATH)

all : $(NAME)

$(NAME) : $(SRC_OBJS) pmake
	$(AR) $(NAME) $(SRC_OBJS) $(LIBFT_OBJS)

pmake :
	$(LIBFTMAKE)

clean :
	$(RM) $(SRC_OBJS)

fclean : clean
			$(RM) $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re pmake