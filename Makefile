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
	rm -f $(NAME) client server client_bonus server_bonus libft.a

all: $(NAME)

re: fclean all

server:
	CC server.c libft/*.c
	mv a.out server

client:
	CC client.c libft/*.c
	mv a.out client

server_bonus:
	CC server_bonus.c libft/*.c
	mv a.out server

client_bonus:
	CC client_bonus.c libft/*.c
	mv a.out client

.PHONY : client server re all fclean clean 