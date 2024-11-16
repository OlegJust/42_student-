NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.
SRCS = srcs/ft_printf.c srcs/ft_utils.c srcs/ft_convert.c srcs/ft_handle_pointer.c
OBJS = $(SRCS:.c=.o)
LIBFT = libft/libft.a

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	make clean -C libft
	rm -f $(OBJS)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all
