NAME = libftprintf.a
CC = cc
SRCS =  ft_strlen.c ft_puthexa_fd.c ft_putihexa_fd.c ft_putnbr_fd.c \
        ft_putstr_fd.c ft_putchar_fd.c ft_putunbr_fd.c ft_printf.c
OBJECTS = $(SRCS:%.c=%.o)
.PHONY: all clean fclean re
all: $(NAME)
$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
%.o: %.c
	$(CC) -Wall -Wextra -Werror -c $< -o $@
$(OBJECTS): ft_printf.h
clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re: | fclean all