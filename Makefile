# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 10:38:38 by aumoreno          #+#    #+#              #
#    Updated: 2023/01/07 11:56:37 by aumoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra 
LIB1 = ar -rcs
LIB2 = ranlib
RM = /bin/rm -f

NAME = libft.a

INCLUDE = libft.h
SRCS =  ft_isalnum.c  ft_isprint.c  ft_memmove.c  ft_strlcat.c  ft_strnstr.c \
		ft_atoi.c    ft_isalpha.c  ft_memchr.c   ft_memset.c   ft_strlcpy.c  ft_strrchr.c \
		ft_bzero.c   ft_isascii.c  ft_memcmp.c   ft_strchr.c   ft_strlen.c   ft_tolower.c \
		ft_calloc.c  ft_isdigit.c  ft_memcpy.c   ft_strdup.c   ft_strncmp.c  ft_toupper.c 


OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
			$(LIB1) $(NAME) $(OBJS) 
			$(LIB2) $(NAME)

.c.o:
		$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 