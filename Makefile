NAME = scop

SRC_FILES = *.c

SRC = $(addprefix src/, $(SRC_FILES))

OBJ = $(SRC:.cpp=.o)

FRAMEWORK = -framework GLUT -framework OpenGL -framework Cocoa

CFLAG = -Wall -Werror -Wextra

INCLUDES = -I includes/

all: $(NAME)

$(NAME):
	@clang $(INCLUDES) -c $(SRC)
	@echo "OBJECTS CREATED"
	@/bin/mv -f *.o src
	@clang $(CFLAG) $(INCLUDES) -o $(NAME) $(OBJ) $(FRAMEWORK)
	@echo "PROJECT CREATED"

clean:
	@/bin/rm -f src/*.o
	@echo "OBJECTS CLEANED"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "ALL FILES CLEANED"

re: fclean all

#g++ -o myprog test.cpp glew.c -I glfw-3.2.1\ 2/include/ libglfw3.a -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo