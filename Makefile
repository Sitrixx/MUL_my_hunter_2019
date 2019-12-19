##
## EPITECH PROJECT, 2019
## BSQ.c
## File description:
## bsq random square
##

NAME	=	my_hunter

SRC	=	src/my_hunter.c	\
		src/main.c		\
		src/window.c	\
		src/first_screen.c

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

RM	=	rm -f

all: $(NAME) msg

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -lcsfml-graphics \
	-lcsfml-window -lcsfml-system -lcsfml-audio

clean:
	$(RM) $(OBJ)
	rm -f *~
	rm -f *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

msg:
					@echo "=======>SUCCESSFULLY COMPILED"
