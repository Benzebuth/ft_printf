NAME	= libftprintf.a

CC		= gcc $(CFLAGS)
CFLAGS	= -Wall -Werror -Wextra

RM		= rm -f

SRCS	= test.c \
		  ft_printf.c

OBJS	= $(addprefix, src/$(SRCS:.c=.o))

LIB_DIR	= libft/

#build
all 	: $(NAME)


$(NAME)	: $(OBJS)
				ar -rcs $@ $^

%.o		: %.c
				$(CC) -c $< -o $(<:.c=.o)

libft	:
				make -C $(LIB_DIR) all

clean	:
				$(RM) $(OBJS)
				make -C $(LIB_DIR) clean

fclean	: clean
				$(RM) $(NAME)
				make -C $(LIB_DIR) fclean

re		: fclean all


.PHONY : all libft clean fclean re
