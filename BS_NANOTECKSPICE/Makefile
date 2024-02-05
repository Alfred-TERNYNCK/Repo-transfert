##
## EPITECH PROJECT, 2024
## BS_NANOTECKSPICE
## File description:
## Makefile
##

SRC_DIR			=	src

SRC				=	$(SRC_DIR)/main.cpp \
					$(SRC_DIR)/AndComponent.cpp \
					$(SRC_DIR)/FalseComponent.cpp \
					$(SRC_DIR)/NotComponent.cpp	\
					$(SRC_DIR)/TrueComponent.cpp \
					$(SRC_DIR)/OrComponent.cpp

OBJ				=	$(SRC:.cpp=.o)

TST_DIR			=	tests

TST				= 	$(TST_DIR)/tests.cpp

TST_OBJ			=	$(SRC:.cpp=.o) $(TST:.cpp=.o)

LIBS 			= 

BINARY			=	nanotekspice

TST_BINARY		= 	$(BINARY).test

CPPFLAGS 		+= 	-Wall -Wextra -iquote -std=c++20

LDLIBS			+= 	$(addprefix -l, $(LIBS))

CC				= g++

all: $(BINARY)

$(BINARY): $(OBJ)
	$(CC) $(OBJ) -o $(BINARY) $(LDFLAGS) $(LDLIBS)

$(TST_BINARY): $(TST_OBJ)

re:	fclean all

tests_run: $(TST_BINARY)
	./$(TST_BINARY)
	gcovr --exclude $(TST_DIR)
	gcovr --exclude $(TST_DIR) --branches

debug: re $(DEBUG_BINARY)

clean:
	$(RM) $(OBJ) $(TST_OBJ)

fclean: clean

.PHONY: all clean fclean tests_run re debug