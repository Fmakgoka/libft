# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/29 14:32:47 by fmakgoka          #+#    #+#              #
#    Updated: 2019/05/30 15:10:07 by fmakgoka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_toupper.c ft_tolower.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
      ft_isascii.c ft_isprint.c ft_memset.c ft_strcmp.c ft_strncmp.c ft_bzero.c \
      ft_memchr.c ft_strcat.c ft_strchr.c ft_strcpy.c ft_strstr.c ft_memccpy.c ft_memcmp.c \
      ft_memmove.c ft_strdup.c ft_strlen.c ft_strncpy.c ft_strrchr.c ft_memcpy.c \
      ft_strncat.c ft_atoi.c ft_strnstr.c ft_strlcat.c
OBJECTS = ft_toupper.o ft_tolower.o ft_isalpha.o ft_isdigit.o ft_isalnum.o \
          ft_memset.o ft_strcmp.o ft_strncmp.o ft_isascii.o ft_isprint.o ft_bzero.o \
          ft_memchr.o ft_strcat.o ft_strchr.o ft_strcpy.o ft_strstr.o ft_memccpy.o ft_memcmp.o \
          ft_memmove.o ft_strdup.o ft_strlen.o ft_strncpy.o ft_strrchr.o ft_memcpy.o \
          ft_strncat.o ft_atoi.o ft_strnstr.o ft_strlcat.o
HEADERS = includes

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: make_lib

make_lib:
	gcc -I $(HEADERS) -c $(SRC)
	ar -rv $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re:    fclean all
