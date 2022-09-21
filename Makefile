NAME = libft
CC = gcc
CFLAGS = -Wall -Werror -Wextra -fsanitize=adress -g
SRCS = #poner los .c
OBJS = ${SRCS:.c=.o}
RM = rm -rf

all : ${NAME}

${NAME} : ${OBJS}
	${CC} $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all