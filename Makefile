NAME = scop
CC = gcc

SRC_PATH = ./src/
OBJ_PATH = ./obj/
LIB_PATH = ./lib/
INC_PATH = ./include/ $(LIB_PATH)libft/includes/ $(LIB_PATH)glfw/include/ \
		   			$(LIB_PATH)glew/include/ $(LIB_PATH)libmat/includes/

GCC_FLGS = -pedantic -Wall -Wextra -Werror
GCC_LIBS = lib/glfw/src/libglfw3.a lib/glew/lib/libGLEW.a  -framework AppKit -framework OpenGL -framework IOKit -framework CoreVideo

SRC_NAME = main.c parsing.c textures.c utils.c input.c init.c

OBJ_NAME = $(SRC_NAME:.c=.o)
LIB_NAME = libft libmat glew/lib glfw/src

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
INC = $(addprefix -I,$(INC_PATH))
LIB = $(addprefix -L$(LIB_PATH),$(LIB_NAME))

all: $(NAME)

$(NAME): $(OBJ)
		make -C $(LIB_PATH)libft -j
		make -C $(LIB_PATH)libmat
				$(CC) $(GCC_FLGS) $(LIB) -lft -lmat $(INC) $(OBJ) $(GCC_LIBS) -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
		@ mkdir -p $(OBJ_PATH)
			$(CC) $(GCC_FLGS) $(INC) -o $@ -c $<

clean:
		rm -fv $(OBJ)
			rm -rf $(OBJ_PATH)

fclean: clean
		make -C $(LIB_PATH)libft fclean
		make -C $(LIB_PATH)libmat fclean
				rm -fv $(NAME)

re: fclean all
