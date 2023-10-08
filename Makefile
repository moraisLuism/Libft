# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmorais- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 17:34:42 by lmorais-          #+#    #+#              #
#    Updated: 2023/10/06 12:22:55 by lmorais-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC		= gcc
CFLAGS 	= -Wall -Wextra -Werror

AR = ar
ARFLAGS = crs

RM = rm -f

INCLUDES = libft.h

SRCS = ft_atoi.c		\
	ft_bzero.c			\
	ft_calloc.c			\
	ft_isalnum.c		\
	ft_isalpha.c		\
	ft_isascii.c		\
	ft_isdigit.c		\
	ft_isprint.c		\
	ft_memchr.c			\
	ft_memcmp.c			\
	ft_memcpy.c			\
	ft_memmove.c		\
	ft_memset.c   		\
	ft_strchr.c			\
	ft_strdup.c			\
	ft_strlcat.c		\
	ft_strlcpy.c		\
	ft_strlen.c			\
	ft_strncmp.c		\
	ft_strnstr.c		\
	ft_strrchr.c		\
	ft_tolower.c		\
	ft_toupper.c		\
	ft_itoa.c			\
	ft_putchar_fd.c		\
	ft_putendl_fd.c		\
	ft_putnbr_fd.c		\
	ft_putstr_fd.c		\
	ft_split.c			\
	ft_striteri.c 		\
	ft_strjoin.c		\
	ft_strmapi.c		\
	ft_strtrim.c		\
	ft_substr.c		
	
BONUS = ft_lstadd_back.c	\
	ft_lstadd_front.c		\
	ft_lstclear.c			\
	ft_lstdelone.c			\
	ft_lstiter.c			\
	ft_lstlast.c			\
	ft_lstmap.c 			\
	ft_lstnew.c				\
	ft_lstsize.c	
	
OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${BONUS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS) $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $@ $^

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)
			
fclean: clean
	$(RM) $(NAME)

re:	fclean all

bonus:		${OBJS} ${OBJS_BONUS}
			ar rcs ${NAME} ${OBJS} ${OBJS_BONUS}
			
.PHONY: all clean fclean re










