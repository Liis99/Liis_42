# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obautist <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 11:46:53 by obautist          #+#    #+#              #
#    Updated: 2024/11/09 19:35:40 by obautist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = gcc  # Compilateur
CFLAGS = -Wall -Wextra -Werror -I. # Options de compilation (inclut le répertoire des en-têtes)
SRC = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isdigit.c \
	  ft_bzero.c ft_memset.c ft_strlen.c ft_toupper.c \
	  ft_tolower.c ft_strdup.c ft_calloc.c ft_strlcpy.c ft_strlcat.c \
	  ft_memcpy.c ft_memmove.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	  ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_malloc.c \
	  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	  ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c  # Liste des fichiers source
OBJ = $(SRC:.c=.o)                    # Convertit .c en .o
NAME = libft.a

# Règle principale
all: $(NAME)

# Créer la bibliothèque
$(NAME): $(OBJ)
	ar rcs $@ $^                       # Crée la bibliothèque à partir des fichiers objets

# Compiler les fichiers .c en .o
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@        # Compile chaque fichier source

# Nettoyer les fichiers objets
clean:
	rm -f $(OBJ)                       # Supprime les fichiers objets

# Nettoyer complètement (y compris la bibliothèque)
fclean: clean
	rm -f $(NAME)                      # Supprime la bibliothèque

# Recompiler tout
re: fclean all                       # Nettoie et recompiles

# Assurez-vous que les règles ne soient pas des fichiers
.PHONY: all clean fclean re
