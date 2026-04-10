CC = gcc

FLAGS = -Wall -Werror -Wextra -fsanitize=address -g
NAME = libft.a
BIN_DIR = bin
EXE = $(addprefix $(BIN_DIR)/, run)

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
		ft_bzero.c   \
		ft_tolower.c \
		ft_toupper.c \
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
		ft_itoa.c \



OBJ_DIR = obj
OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

# COMPILING AND CREATING THE LIB
all: $(NAME)


$(NAME): $(OBJ_FILES)
	@ar rcs $@ $^
	@echo "compiled" $?

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)/%.o: %.c libft.h | $(OBJ_DIR)
	@$(CC) $(FLAGS) -c $< -o $@
# -------

# RUNNING
# creates directory to put the executable
# (-p used for when its called again, it does not create another dir and do not give an error)
$(BIN_DIR):
	@mkdir -p $@

# run the code with the proper flags that calls the libft (lft)
run: tests/stralloc_test.c $(NAME) | $(BIN_DIR)
	@$(CC) $(FLAGS) $< -lbsd -L. -lft -o $(EXE)
	@echo "main compiled"
# -------

# CLEANING
#clean the objects
clean:
	@rm -rf $(OBJ_DIR)
	@echo "objs cleaned"

# calls clean (then clean the objects), the archive and the out files
fclean: clean
	@rm -rf $(NAME) $(BIN_DIR)
	@echo "$(NAME) $(BIN_DIR) cleaned"
# -------

# MISC
# cleans everything then redo the process of all
re: fclean all

# safety mesuare, first to make those as "commands" so they will run just when being called
# also do not conflit with files of same name (in case of files that have the same name)
.PHONY: all re clean fclean
