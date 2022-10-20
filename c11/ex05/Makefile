NAME = do-op
SRCS = main.c ft_calculator.c

all : $(NAME)

$(NAME) : $(SRCS)
	@cc -Wall -Wextra -Werror $^ -o $@

clean :
	@rm -f $(NAME)

re : clean all

.PHONY: all clean re
