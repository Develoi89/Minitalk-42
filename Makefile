NAME	=	libft.a
SRC		=	server.c \
			
OBJ		= $(SRC:%.c=%.o)
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc

$(NAME): $(OBJ)
	make -C libft 
	mv libft/libft.a libft.a
	ar rc $(NAME) $(OBJ) 

clean:
	rm -f $(OBJ) src/*.o

fclean: clean
	make fclean -C libft
	rm -f $(NAME) a.out libft.a

all: $(NAME)

re: fclean all

server:
	CC server.c libft/*.c && ./a.out

client:
	CC client.c libft/*.c

.PHONY : client server re all fclean clean 