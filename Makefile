CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = ft_tolower.c ft_toupper.c main.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_memset.c ft_bzero.c
SRCS += ft_isdigit.c ft_isprint.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_calloc.c
SRCS += ft_memcpy.c ft_memmove.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_strdub.c
AR = ar -rc
RM = rm -rf
OBJ = $(SRCS:.c=.o)
NAME = libft.a

all : $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean:
	@$(RM) $(NAME) $(OBJ)
re: fclean all
