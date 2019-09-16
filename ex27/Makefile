# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzero <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/25 13:03:14 by rzero             #+#    #+#              #
#    Updated: 2018/10/25 15:15:28 by rzero            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CFLAG = -Wall -Wextra -Werror

SRCF = main.c ft_read_file.c ft_putstr.c

OBJF = main.o ft_read_file.o ft_putstr.o

all: $(NAME)

$(NAME):
	gcc $(CFLAG) $(SRCF) -o $(NAME)

clean:
	/bin/rm -f $(OBJF)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
