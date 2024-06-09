# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kuyamagu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 21:14:08 by kuyamagu          #+#    #+#              #
#    Updated: 2024/06/09 20:36:54 by kuyamagu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_convert.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

RM = rm -f

AR = ar rc

CFLAGS = -Wall -Wextra -Werror

%.o:%.c
	cc $(CFLAGS) -c $< -o $@

LIBFT_PATH = ./libft
LIBFT_NAME = libft.a

$(NAME) : $(OBJS)
	make -C	$(LIBFT_PATH)	all
	cp	$(LIBFT_PATH)/$(LIBFT_NAME)	$(NAME)
	$(AR)	$(NAME)	$(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
	make -C $(LIBFT_PATH)	fclean

fclean: clean
	$(RM) $(NAME)
	make -C $(LIBFT_PATH)	fclean

re: fclean all

.PHONY: all clean fclean re
