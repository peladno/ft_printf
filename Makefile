NAME = libftprintf.a

CC = cc 
CFLAGS = -Wall -Wextra -Werror
AR = ar 
ARFLAGS = rcs

SRCS = ft_printf.c \
	print_format.c \
	print_char.c \
	print_string.c \
	print_pointer.c \
	print_hex.c \
	print_number.c \
	print_unsigned.c

OBJS  = ${SRCS}: .c=.o 

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${CFLAGS} ${NAME} ${OBJS}

%.o:%.c 
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re