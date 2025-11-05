NAME = libft.a

SRC = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:%.c=%.o))

TESTS_SRC = test_ft_isalpha.c \
				test_ft_isdigit.c
TESTS_OBJ = $(addprefix $(OBJ_DIR)/, $(TESTS_SRC:%.c=%.o))
TESTS_BIN = tests

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

check: norm

norm:
	@echo "\n------------ Norm ------------\n"
	@norminette
	@echo

test:
	@$(CC) $(CFLAGS) test.c -o test.out
	@./test.out
	@rm -f test.out

.PHONY: all clean fclean re
