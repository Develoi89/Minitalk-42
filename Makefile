NAME	=	libft.a
SRC		=	server.c \
			
OBJ		= $(SRC:%.c=%.o)
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc

$(NAME): $(OBJ)
	make -C libft 
	mv libft/libft.a libft.a
	ar rc $(NAME) $(OBJ) 

.PHONY : clean
clean:
	rm -f $(OBJ) src/*.o

.PHONY : fclean
fclean: clean
	make fclean -C libft
	rm -f $(NAME) a.out libft.a

.PHONY : all
all: $(NAME)

.PHONY : re
re: fclean all

.PHONY : prove
prove:
	CC $(SRC) libft/*.c && ./a.out