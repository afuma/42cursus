# Pour rendre des bonus, vous devez inclure une règle bonus à votre Makefile qui \
#ajoutera les divers headers, librairies ou fonctions qui ne sont pas autorisées dans
#la partie principale du projet.

# SYSTEME = linux
# OBJ := $(SRC:.c=.o) -> evaluer une seule fois a la declaration
# OBJ = $(SRC:.c=.o) -> evaluer a chaque fois qu'elle est utiliser( peut changer en cours d'execution du makefile ) recalculer la variable

CC = gcc
EXEC = prog
# SRC = $(wildcard *.c) # ATTENTION enlever le wildcard sinon -42
SRC = ft_atoi.c \
      ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
      ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
      ft_tolower.c ft_toupper.c

OBJ = $(SRC:.c=.o)

INCLUDES = ./libft.h
CFLAGS = -Wall -Wextra -Werror

all: $(EXEC)

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	
# $(EXEC): $(OBJ)
# 	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

$(EXEC): $(OBJ)
	ar rcs $(EXEC) $(OBJ)
