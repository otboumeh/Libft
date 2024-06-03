# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 15:59:04 by otboumeh          #+#    #+#              #
#    Updated: 2024/05/31 19:40:46 by otboumeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

AR = ar rc
RM = -rm -f

SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c  ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_strlcpy.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c

SRC_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = 	$(SRC:.c=.o)

OBJ_B =	$(SRC_B:.c=.o)


# **************************************************************************** #

all:		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

bonus:		$(OBJ) $(OBJ_B)
			$(AR) $(NAME) $(OBJ) $(OBJ_B)

.c.o:
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ) $(OBJ_B)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus