NAME = libft.a

SRCS = \
		srcs/char/ft_isalpha.c \
		srcs/char/ft_isdigit.c \
		srcs/char/ft_isalnum.c \
		srcs/char/ft_isascii.c \
		srcs/char/ft_isprint.c \
		srcs/char/ft_toupper.c \
		srcs/char/ft_tolower.c

SRCS += \
		srcs/maths/ft_abs.c \
		srcs/maths/ft_max.c

SRCS += \
		srcs/memory/ft_calloc.c \
		srcs/memory/ft_bzero.c \
		srcs/memory/ft_memset.c \
		srcs/memory/ft_memcpy.c \
		srcs/memory/ft_memmove.c \
		srcs/memory/ft_memchr.c \
		srcs/memory/ft_memcmp.c

SRCS += \
		srcs/str/ft_strlen.c \
		srcs/str/ft_strchr.c \
		srcs/str/ft_strrchr.c \
		srcs/str/ft_strncmp.c \
		srcs/str/ft_strnstr.c \
		srcs/str/ft_strlcat.c \
		srcs/str/ft_strlcpy.c \
		srcs/str/ft_strdup.c \
		srcs/str/ft_substr.c \
		srcs/str/ft_strjoin.c \
		srcs/str/ft_strtrim.c \
		srcs/str/ft_split.c \
		srcs/str/ft_atoi.c \
		srcs/str/ft_itoa.c \
		srcs/str/ft_strmapi.c \
		srcs/str/ft_striteri.c

SRCS += \
		srcs/fd/ft_putchar_fd.c \
		srcs/fd/ft_putstr_fd.c \
		srcs/fd/ft_putendl_fd.c \
		srcs/fd/ft_putnbr_fd.c \

SRCS += \
		srcs/lists/ft_lstnew_bonus.c \
		srcs/lists/ft_lstadd_front_bonus.c \
		srcs/lists/ft_lstsize_bonus.c \
		srcs/lists/ft_lstlast_bonus.c \
		srcs/lists/ft_lstadd_back_bonus.c \
		srcs/lists/ft_lstdelone_bonus.c \
		srcs/lists/ft_lstclear_bonus.c \
		srcs/lists/ft_lstiter_bonus.c \
		srcs/lists/ft_lstmap_bonus.c \

SRCS += \
		srcs/get_next_line/get_next_line.c \
		srcs/get_next_line/get_next_line_utils.c \

SRCS += \
		srcs/printf/ft_printf.c \
		srcs/printf/srcs/ft_alignment.c \
		srcs/printf/srcs/ft_utils.c \
		srcs/printf/srcs/ft_atol.c \
		srcs/printf/srcs/ft_swrite.c \
		srcs/printf/srcs/ft_format_arg.c \
		srcs/printf/srcs/ft_putnbr_base.c \
		srcs/printf/srcs/ft_putnbr.c \
		srcs/printf/srcs/ft_type_c.c \
		srcs/printf/srcs/ft_type_s.c \
		srcs/printf/srcs/ft_type_p.c \
		srcs/printf/srcs/ft_type_i.c \
		srcs/printf/srcs/ft_type_u.c \
		srcs/printf/srcs/ft_type_x.c \
		srcs/printf/srcs/ft_type_xx.c \
		srcs/printf/srcs/ft_type_mod.c

OBJ_DIR = .obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))

INCLUDES_DIR = includes
# HEADERS = libft.h get_next_line.h ft_printf.h libft_colors.h
HEADERS = 
INCLUDES = $(addprefix $(INCLUDES_DIR)/, $(HEADERS))

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES_DIR) -MMD -MP

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.c $(INCLUDES)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

check: norm

norm:
	@clear
	@echo "\n------------ Norm ------------\n"
	@norminette $(SRCS) $(INCLUDES)
	@echo

.PHONY: all clean fclean re check norm

-include $(OBJ:.o=.d)
