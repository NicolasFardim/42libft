CC = gcc
FLAGS = -Wall -Werror -Wextra -fsanitize=address -g
NAME = libft.a
BIN_DIR = bin
OBJ_DIR = obj

SRCS =	ctype/ft_isalnum.c \
		ctype/ft_isalpha.c \
		ctype/ft_isascii.c \
		ctype/ft_isdigit.c \
		ctype/ft_isprint.c \
		ctype/ft_tolower.c \
		ctype/ft_toupper.c \
		string/ft_bzero.c \
		string/ft_memchr.c \
		string/ft_memcmp.c \
		string/ft_memcpy.c \
		string/ft_memmove.c \
		string/ft_memset.c \
		string/ft_strchr.c \
		string/ft_strlen.c \
		string/ft_strncmp.c \
		string/ft_strrchr.c \
		bsd_string/ft_strlcat.c \
		bsd_string/ft_strlcpy.c \
		bsd_string/ft_strnstr.c \
		stdlib/ft_atoi.c \
		stdlib/ft_calloc.c \
		ft_string/ft_split.c \
		ft_string/ft_strdup.c \
		ft_string/ft_striteri.c \
		ft_string/ft_strjoin.c \
		ft_string/ft_strmapi.c \
		ft_string/ft_strtrim.c \
		ft_string/ft_substr.c \
		ft_put/ft_putchar_fd.c \
		ft_put/ft_putendl_fd.c \
		ft_put/ft_putnbr_fd.c \
		ft_put/ft_putstr_fd.c \
		ft_lst/ft_lstadd_back.c \
		ft_lst/ft_lstadd_front.c \
		ft_lst/ft_lstclear.c \
		ft_lst/ft_lstdelone.c \
		ft_lst/ft_lstiter.c \
		ft_lst/ft_lstlast.c \
		ft_lst/ft_lstmap.c \
		ft_lst/ft_lstnew.c \
		ft_lst/ft_lstsize.c

EXE = $(addprefix $(BIN_DIR)/, run)
OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@ar rcs $@ $^
	@echo "compiled" $?

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)/%.o: %.c libft.h | $(OBJ_DIR)
	@$(CC) $(FLAGS) -c $< -o $@

$(BIN_DIR):
	@mkdir -p $@

run: tests/main.c $(NAME) | $(BIN_DIR)
	@$(CC) $(FLAGS) $< -lbsd -L. -lft -o $(EXE)
	@echo "main compiled"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "objs cleaned"

fclean: clean
	@rm -rf $(NAME) $(BIN_DIR)
	@echo "$(NAME) $(BIN_DIR) cleaned"

re: fclean all

.PHONY: all re clean fclean
