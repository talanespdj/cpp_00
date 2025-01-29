NAME = bankacc 
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -g3 

SRCS = tests.cpp \
	Account.cpp \

OBJS = $(SRCS:.cpp=.o) 

.cpp.o:
	@$(CC) $(FLAGS) -c -o $@ $< 

all: $(NAME)
        
$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS)
	@echo "\033[1mbankaccount built\033[0m"

clean:
	@rm -rf $(OBJS)
	@echo "c'est clean"

fclean: clean
	@rm -rf $(NAME)
	@echo "c'est fclean"

re: fclean all

.PHONY: all, clean, fclean, re
