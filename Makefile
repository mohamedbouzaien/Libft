# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbouzaie <mbouzaie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/03 15:10:22 by mbouzaie          #+#    #+#              #
#    Updated: 2020/01/13 22:40:07 by mbouzaie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

HEADER = libft.h

FLAGS = -Wall -Wextra -Werror -g

OPTION = -c -I $(HEADER)

SRC = 	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isupper.c \
		ft_islower.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_isspace.c \
		ft_isblank.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strnew.c \
		ft_strcpy.c \
		ft_strcat.c \
		ft_memalloc.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_intlen.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strnjoin.c \
		ft_chrloc.c  \
		ft_memdel.c \

SRC_B =	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

OBJ =	ft_memset.o ft_bzero.o ft_memcpy.o ft_strnew.o ft_strcpy.o\
		ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o \
		ft_strlcpy.o ft_calloc.o ft_substr.o ft_strjoin.o ft_strcat.o \
		ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strnstr.o ft_memalloc.o\
		ft_strncmp.o ft_atoi.o ft_isupper.o ft_islower.o ft_strtrim.o\
		ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
		ft_toupper.o ft_tolower.o ft_isspace.o ft_isblank.o ft_strdup.o \
		ft_split.o ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putendl_fd.o\
		ft_putstr_fd.o ft_putnbr_fd.o ft_intlen.o \
		 ft_strequ.o ft_strnequ.o ft_strnjoin.o\
		ft_chrloc.o ft_memdel.o\

OBJ_B =	ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o\
		ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o\
		
all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "libft est la\n"

bonus: $(OBJ) $(OBJ_B)
	ar rcs $(NAME) $(OBJ) $(OBJ_B)
	@echo "libft bonus est la\n"	

clean:
	/bin/rm -f $(OBJ) $(OBJ_B)
	@echo "Les fichier .o sont efface"

fclean: clean
	/bin/rm -f $(NAME)
	@echo "$(NAME) ainsi que les fichiers .o sont efface"

re: fclean all
