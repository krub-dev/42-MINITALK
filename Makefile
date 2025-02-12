# Name Executables
NAME = minitalk
S_NAME = server
C_NAME = client

# FLAGS
CFLAGS = -g -Wall -Werror -Wextra -fsanitize=address

# Colours 
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
S_SRC = SRC/server.c
C_SRC = SRC/client.c

# Objects
S_OBJ = SRC/server.o
C_OBJ = SRC/client.o

# Headers/Lib
HD = minitalk.h
HDLBFT = ./LIBFT/libft.h
HDPF = ./LIBFT/ft_printf.h
HDGNL = ./LIBFT/get_next_line.h
LLibft = ./LIBFT/libft.a

# Rules

# Target default (when you do make)
all: libft $(NAME)

# Create the exec and compile
$(NAME): $(S_OBJ) $(C_OBJ) $(S_NAME) $(C_NAME) 
	
$(S_NAME): SRC/server.c $(S_OBJ) $(LLibft)
	@echo "\n$(BGREEN)| Compiled >>> [MINITALK] >>> [SERVER] | $(RESET)"
	cc $(CFLAGS) $(S_SRC) $(LLibft) -o $(S_NAME)

$(C_NAME): SRC/client.c $(C_OBJ) $(LLibft)
	@echo "\n$(BGREEN)| Compiled >>> [MINITALK] >>> [CLIENT] | $(RESET)"
	cc $(CFLAGS) $(C_SRC) $(LLibft) -o $(C_NAME)

# Take .o, generate .c
%.o: %.c $(HD) $(HDLBFT) $(HDPF) $(HDGNL) Makefile
	cc $(CFLAGS) -c $< -o $@


##################################

# Makfile LIBFT+PRINTF+GNL
libft:
	@cd ./LIBFT && make

##################################

# Clean .o files
clean:
	@rm -f $(S_OBJ) $(C_OBJ)
	@echo "$(BRED)| Deleted >>> [MINITALK] | $(RESET)\n"
	@$(MAKE) -C ./LIBFT clean

# Make clean, delete binary (executable)
fclean: clean
	@rm -f $(NAME) $(S_NAME) $(C_NAME)
	@echo "$(BRED)| Deleted Executables >>> [SERVER/CLIENT] | $(RESET)\n"
	@$(MAKE) -C ./LIBFT fclean

# Fclean and make again
re: fclean all
	@echo "$(BWHITE)| Redone >>> [MINITALK][LIBFT][GET_NEXT_LINE][PRINTF] | $(RESET)\n"
	
# Always execute this rules, good practice
.PHONY: all clean fclean re libft
