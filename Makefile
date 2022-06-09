##
## EPITECH PROJECT, 2020
## delivery
## File description:
## Makefile
##

SRC =	src/draw_pixel.c \
		src/draw_circle.c \
		src/draw.c \
		src/draw_rec.c \
		src/utilities.c \
		src/usage.c \
		src/select_mode.c \
		src/screensaver.c

OBJ = 	$(SRC:.c=.o)

NAME = 	my_screensaver

CFLAGS = -g

all: 	$(NAME)

$(NAME): 	$(OBJ)
		gcc -g -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-system -lm

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re