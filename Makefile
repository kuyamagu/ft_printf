SRCS = ft_printf.c ft_convert.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

RM = rm -f

AR = ar rc

CFLAGS = -Wall -Wextra -Werror

%.o:%.c
	cc $(CFLAGS) -c $< -o $@

LIBFT_PATH = ./Libft
LIBFT_NAME = libft.a

$(NAME) : $(OBJS)
	make -C	$(LIBFT_PATH)	all
	cp	$(LIBFT_PATH)/$(LIBFT_NAME)	$(NAME)
	$(AR)	$(NAME)	$(OBJS)


# $(NAME): $(OBJS)
# 	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
