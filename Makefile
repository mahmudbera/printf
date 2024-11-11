NAME = libftprintf.a

SRCS =	ft_print.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_putstr.c \
		ft_putwbase.c \
		utils.c

OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar r

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)
+
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re