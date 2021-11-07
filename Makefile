NAME	= libftprintf.a

CC		= gcc $(CFLAGS)
CFLAGS	= -Wall -Werror -Wextra

RM		= rm -f

SRCS	= ft_printf.c \
		  ft_is_char.c \
		  ft_putnbr_base.c

OBJS	= $(addprefix src/, $(SRCS:.c=.o))

LIB_DIR	= libft/

LIBFT_OBJS = libft/*.o

#build
all 	: $(NAME)


$(NAME)	: libft $(OBJS)
				make -C $(LIB_DIR) all
				ar -rcs $@ $(OBJS) $(LIBFT_OBJS)

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
