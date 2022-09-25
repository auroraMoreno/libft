CC = gcc
CFLAGS = -Wall -Werror -Wextra 
LIB1 = ar -rcs
LIB2 = ranlib
RM = /bin/rm -f

NAME = libft.a

INCLUDE = libft.h
SRCS = #poner los .c

OBJS = $(SRCS:.c=.o)

BONUS_S = #poner los bonuses

BONUS_O = $(BONUS_S.c= .o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
			$(LIB1) $(NAME) $(OBJS) 
			$(LIB2) $(NAME)

bonus:	$(NAME) $(BONUS_O)
				$(LIB1) $(NAME) $(BONUS_O)
				$(LIB2) $(NAME)

.c.o:
		$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS) $(BONUS_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus 