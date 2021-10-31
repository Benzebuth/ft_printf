NAME	= libftprintf.a

CC		= gcc $(CFLAGS)
CFLAGS	= -Wall -Werror -Wextra

RM		= rm -f

SRCS	= test.c \
		  ft_printf.c

OBJS	= $(addprefix, src/$(SRCS:.c=.o))

#build
all 	: $(NAME)

$(NAME)	: $(OBJS)
			ar -rcs $@ $^
%.o		:  %.c
			$(CC) -c $< -o $(<:.c=.o)

clean	: $(RM) $(OBJS)


fclean	: clean
			$(RM) $(NAME)

re		: fclean all

.PHONY : all clean fclean re
