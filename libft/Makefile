# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 21:22:14 by bcolin            #+#    #+#              #
#    Updated: 2021/10/21 21:22:17 by bcolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name of archive
NAME 	= libft.a

#compiler option
CC 		= gcc
CFLAGS 	= -Wall -Werror -Wextra

RM 		= rm -f

#list of srcs with path
SRCS 	= \
		ft_isalpha.c \
		ft_isupper.c \
		ft_islower.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strlen.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_strncmp.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_itoa.c \
		ft_split.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_calloc.c \
		ft_memcmp.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c

OBJS 		= ${SRCS:.c=.o}

BONUS_SRCS 	= \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

BONUS_OBJS 	= ${BONUS_SRCS:.c=.o}

# build
all 	: 	${NAME}

$(NAME) : 	${OBJS}
				ar -rcs $@ $^

%.o 	: 	%.c
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

bonus	:	${OBJS} ${BONUS_OBJS}
				ar -rcs $(NAME) $^

clean 	:
				${RM} ${OBJS} ${BONUS_OBJS}

fclean 	: 	clean
				${RM} ${NAME}

re 		: 	fclean all

.PHONY 	: 	all clean fclean re bonus
