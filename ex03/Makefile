# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/16 10:20:16 by mhidani           #+#    #+#              #
#    Updated: 2026/03/17 17:59:45 by mhidani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= diamondTrap
SINCE		= 2026.03.17
AUTHOR		= mhidani
LOCAL		= 42SP
VERSION		= 1.0.0v

INC_DIR		= includes
SRC_DIR		= src
OBJ_DIR		= obj

FILES		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
SRCS		= $(addprefix $(SRC_DIR)/, $(FILES))
OBJS		= $(addprefix $(OBJ_DIR)/, $(FILES:.cpp=.o))

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
CXXINCS		= -I$(INC_DIR)/

MKD			= mkdir
MKDFLAGS	= --parents
RM			= rm
RMFLAGS		= --force --recursive

all: banner $(NAME)

clean:
	@$(RM) $(RMFLAGS) $(OBJ_DIR)
	@echo "$(OBJ_DIR): is cleaned  🧹"

fclean: clean
	@$(RM) $(RMFLAGS) $(NAME)
	@echo "$(NAME): is cleaned  🧹"

re: fclean all

banner:
	@echo "🛸 $(LOCAL) - [CPP-03 Exercise 03]"
	@echo "Now It Feels Strange $(VERSION)"
	@echo "$(AUTHOR) $(SINCE)"

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) $(CXXINCS) -o $@
	@echo "$(NAME): is done 🤙"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@$(MKD) $(MKDFLAGS) $(dir $@)
	@$(CXX) $(CXXFLAGS) $(CXXINCS) -c $< -o $@

.PHONY: clean fclean all re banner