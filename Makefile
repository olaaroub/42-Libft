# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 11:35:23 by olaaroub          #+#    #+#              #
#    Updated: 2023/11/17 18:01:28 by olaaroub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_tolower.c ft_toupper.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_memset.c ft_bzero.c ft_calloc.c
SRCS += ft_isdigit.c ft_isprint.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c
SRCS += ft_memcpy.c ft_memmove.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_strdup.c
SRCS += ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c
AR = ar -rc
RM = rm -rf
OBJ = $(SRCS:.c=.o)
NAME = libft.a

all : $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean:
	@$(RM) $(NAME) $(OBJ)
re: fclean all

.PHONY : clean fclean all re