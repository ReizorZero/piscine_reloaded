# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzero <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/23 17:55:54 by rzero             #+#    #+#              #
#    Updated: 2018/10/31 15:41:56 by rzero            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCD = srcs/

SRCF = $(SRCD)ft_putchar.c $(SRCD)ft_putstr.c $(SRCD)ft_strcmp.c $(SRCD)ft_strlen.c $(SRCD)ft_swap.c

OBJF = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HDRD = ./includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCF) -I $(HDRD)
	ar rc $(NAME) $(OBJF)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJF)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
