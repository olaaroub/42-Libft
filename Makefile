# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 11:35:23 by olaaroub          #+#    #+#              #
#    Updated: 2023/11/22 21:54:16 by olaaroub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = rm -rf
SRCS = ft_tolower.c ft_toupper.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_memset.c ft_bzero.c
SRCS += ft_isdigit.c ft_isprint.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c
SRCS += ft_memcpy.c ft_memmove.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_atoi.c
SRCS += ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c
SRCS += ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putchar_fd.c ft_calloc.c ft_strdup.c
OBJ = $(SRCS:.c=.o)
#BONUS PART
B_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c
B_SRCS += ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c
B_OBJ = $(B_SRCS:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

$(OBJ):$(SRCS)
	@$(CC) $(CFLAGS) -c $(SRCS)

bonus : $(B_OBJ)

$(B_OBJ):$(B_SRCS)
	@$(CC) $(CFLAGS) -c $(B_SRCS)
	@$(AR) $(NAME) $(B_OBJ)

clean:
	@$(RM) $(OBJ) $(B_OBJ)

fclean:
	@$(RM) $(NAME) $(OBJ) $(B_OBJ)
re: fclean all

.PHONY : clean fclean all re bonus