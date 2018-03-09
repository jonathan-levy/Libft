# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jolevy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 22:28:36 by jolevy            #+#    #+#              #
#    Updated: 2018/03/05 12:15:41 by jolevy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC =  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
       ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
       ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c \
       ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
       ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
       ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
       ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
       ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c  \
       ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
       ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
       ft_lstmap.c ft_islower.c ft_isspace.c ft_isupper.c ft_memccpy.c \
       ft_stpcpy.c ft_stralloc.c ft_strsplit.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
