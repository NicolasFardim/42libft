CC = gcc
FLAGS = -Wall -Werror -Wextra # -fsanitize=address -g
NAME = libft.a
BIN_DIR = bin
OBJ_DIR = obj

SRCS = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_isascii.c \
		ft_strlen.c  \
		ft_strchr.c  \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_memset.c  \
		ft_memcpy.c  \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_bzero.c   \
		ft_tolower.c \
		ft_toupper.c \
		ft_atoi.c \
		ft_calloc.c  \
		ft_strdup.c  \
		ft_substr.c  \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putchar_fd.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_split.c \
		ft_itoa.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

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
