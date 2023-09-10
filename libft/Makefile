SRCS		= ft_split.c ft_atoi.c

OBJS	 	= ${SRCS:.c=.o}

NAME	 	= libft.a

RM		 	= rm -f

CC			= cc -I libft.h -Wall -Wextra -Werror

all:		${NAME}

$(NAME):	${OBJS}
				ar rcs ${NAME} ${OBJS}

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean ${NAME}

.PHONY:		all clean fclean re