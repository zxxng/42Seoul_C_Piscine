NAME = do-op
SRCS = main.c ft_calculator.c
OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@cc -Wall -Wextra -Werror $^ -o $@

%.o : %.c
	@cc -Wall -Wextra -Werror -c $^ -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
