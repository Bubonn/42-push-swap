SRCS		= push_swap.c ft_checkarg.c   \
			   ft_checkres.c \
			  ft_tab_to_index.c ft_tab_deci_to_bin.c  \
			  ft_args_to_str.c  \
			  

SORT		= ft_sort_swap.c ft_sort_rotate.c ft_sort_reverse_rotate.c \
			ft_sort_many_numbers.c ft_sort_few_numbers.c ft_sort_very_few_numbers.c ft_sort_push.c

SORT_DIR	=  sort/

SRCS_DIR	= srcs/

SORT_PATH 	= $(SORT:%=$(SORT_DIR)%)

SRCS_PATH 	= $(SRCS:%=$(SRCS_DIR)%)

OBJS	 	= $(SRCS_PATH:%.c=%.o) $(SORT_PATH:%.c=%.o)



NAME	 	= push_swap

PATH_LIBFT	= -C libft

LIBRARY		= ./libft/libft.a

RM		 	= rm -f

CC			= cc -Wall -Wextra -Werror

all:		${NAME}

$(NAME):	${OBJS}
				$(MAKE) $(PATH_LIBFT)
				$(CC) -I include $(SRCS_PATH) $(SORT_PATH) $(LIBRARY) -o $(NAME)

clean:
				${RM} ${OBJS}
				$(MAKE) clean $(PATH_LIBFT)

fclean:		clean
				${RM} ${NAME}
				$(MAKE) fclean $(PATH_LIBFT)

re:			fclean ${NAME}

.PHONY:		all clean fclean re
