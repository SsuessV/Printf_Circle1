NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -MMD -MP

SRCS = \
\
\
ft_printf.c\
ft_putchar.c\
ft_putnbr.c\
ft_putstr.c\

OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
-include $(DEPS)