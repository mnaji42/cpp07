# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/10 00:03:48 by mnaji             #+#    #+#              #
#    Updated: 2020/03/10 00:04:29 by mnaji            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifndef VERBOSE
.SILENT:
endif

FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = template

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAGS)  $(OBJS) -o $(NAME)
	@echo "\033[32m$(NAME) generated!\033[0m"

clean:
	@rm -Rf $(OBJS)
	@echo "\033[31mObjects deleted !\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31m$(NAME) deleted !\033[0m"

re: fclean all

.PHONY: all clean fclean re