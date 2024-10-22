CC=cc
NAME:=libftprintf.a
LIBFT_DEPENDENCY:=libft.a
SRC_DIR:=src
OBJ_DIR:=build
INCLUDE_DIR:=include
LIBFT_DIR:=lib/libft
CFLAGS:=-Wall -Wextra -Werror -I$(INCLUDE_DIR) -I$(LIBFT_DIR)
SRC_FILES:=\
	$(SRC_DIR)/ft_printf.c \
	$(SRC_DIR)/get_format_specifier.c \
	$(SRC_DIR)/put_hex.c \
	$(SRC_DIR)/put_nbr_base.c \
	$(SRC_DIR)/utils.c \
	$(SRC_DIR)/print_functions/print_character_format.c \
	$(SRC_DIR)/print_functions/print_hex_format.c \
	$(SRC_DIR)/print_functions/print_nbr_format.c \
	$(SRC_DIR)/print_functions/print_pointer_format.c \
	$(SRC_DIR)/print_functions/print_string_format.c \
	$(SRC_DIR)/print_functions/print_unsigned_format.c

OBJ_FILES:=$(SRC_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# RULES

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
#	@mkdir -p $(OBJ_DIR)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_DEPENDENCY):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ_FILES) $(LIBFT_DEPENDENCY)
	cp $(LIBFT_DIR)/$(LIBFT_DEPENDENCY) $(NAME)
	ar -rcs $(NAME) $(OBJ_FILES)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
