# MAKEFILE LIBFT(SIN BONUS) + PRINTF + GNL

# Name of the executable (LIBFT+PRINTF+GNL)
NAME = libft.a

# FLAGS
CFLAGS = -Wall -Werror -Wextra

# Colors 
RESET 	= \033[0m
RED 	= \033[0;31m
BRED 	= \033[1;31m
GREEN 	= \033[0;32m
BGREEN 	= \033[1;32m
PURPLE 	= \033[0;35m
BPURPLE	= \033[1;35m
BLUE 	= \033[0;34m
BBLUE 	= \033[1;34m
CYAN 	= \033[0;36m
BCYAN 	= \033[1;36m
WHITE 	= \033[0;97m
BWHITE 	= \033[1;97m
YELLOW 	= \033[0;33m
BYELLOW = \033[1;33m

# Sources
SRCS = ./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c ./ft_isascii.c ./ft_isprint.c ./ft_strlen.c ./ft_memset.c ./ft_bzero.c ./ft_memcpy.c ./ft_memmove.c ./ft_strlcpy.c ./ft_strlcat.c ./ft_toupper.c ./ft_tolower.c ./ft_strchr.c ./ft_strrchr.c ./ft_strncmp.c ./ft_memchr.c ./ft_memcmp.c ./ft_strnstr.c ./ft_atoi.c ./ft_calloc.c ./ft_strdup.c ./ft_substr.c ./ft_strjoin.c ./ft_strtrim.c ./ft_split.c ./ft_itoa.c ./ft_strmapi.c ./ft_striteri.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_printf.c ./ft_put_csp.c ./ft_put_diu.c ./ft_put_hex.c

SRCS_GNL = ./get_next_line.c ./get_next_line_utils.c

# Headers
HDLBFT = libft.h
HDPF = ft_printf.h
HDGNL = get_next_line.h

# Objects LIBFT+PRINTF
OBJS = $(SRCS:.c=.o) $(SRCS_GNL:.c=.o)

# Rules

# Target default (when you do make)
all: $(NAME)

# Create the library and compile
$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "$(BYELLOW)| Compiled >>> [LIBFT][GET_NEXT_LINE][PRINTF] | $(RESET)\n"

# Take .o, generate .c
%.o: %.c $(HDLBFT) $(HDPF) $(HDGNL) Makefile
	@cc $(CFLAGS) -c $< -o $@

# Clean .o files
clean:
	@rm -f $(OBJS)
	@echo "$(BRED)| Deleted >>> [LIBFT][GET_NEXT_LINE][PRINTF] | $(RESET)\n"

# Make clean, delete binary (executable)
fclean: clean 
	@rm -f $(NAME)
	@echo "$(BRED)| Deleted Library >>> [LIBFT.a] | $(RESET)\n"

# Fclean and make again
re: fclean all
	
# Always execute this rules, good practice
.PHONY: all clean fclean re
