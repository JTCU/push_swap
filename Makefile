SRCS			=	push_swap.c ft_actions.c ft_utils.c ft_basic_functions.c
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= push_swap.a

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(SRCS) -g -o push_swap
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME) push_swap

re:				fclean $(NAME)