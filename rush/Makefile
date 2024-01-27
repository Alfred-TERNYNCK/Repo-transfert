##
## EPITECH PROJECT, 2024
## rush3_experiments
## File description:
## Makefile
##

SRC_DIR			=	src
TEXT_SRC		= 	Display.cpp
GRAPHICAL_SRC	=	Display.cpp
MODULES_SRC		=	OperatingSystem.cpp 						\
					HostNames.cpp 								\
					DateTime.cpp 								\
					Memory.cpp									\
					CPU.cpp										\
					Battery.cpp
BASE_SRC		=	$(addprefix modules/, $(MODULES_SRC)) 		\
					$(addprefix informations/, $(TEXT_SRC)) 	\
					$(addprefix graphical/, $(GRAPHICAL_SRC)) 	\
          			Option.cpp 									\
					Utils.cpp
SRC				=	$(addprefix $(SRC_DIR)/, $(BASE_SRC))
OBJ				=	$(SRC:.cpp=.o) $(MAIN:.cpp=.o)
MAIN			=	$(SRC_DIR)/Main.cpp
TST_DIR			=	tests
TST				=
TST_OBJ			=	$(SRC:.cpp=.o) $(TST:.cpp=.o)
LIBS 			=   ncurses sfml-graphics sfml-window sfml-system

BINARY			=	MyGKrellm
TST_BINARY		= 	$(BINARY).test

CPPFLAGS 		+= 	-Wall -Wextra -iquote -std=c++20
LDLIBS			+= 	$(addprefix -l, $(LIBS))

CC				= g++

all: $(BINARY)

$(BINARY): $(OBJ)
	$(CC) $(OBJ) -o $(BINARY) $(LDFLAGS) $(LDLIBS)

$(TST_BINARY): $(TST_OBJ)
	$(CC) $(TST_OBJ) -o $(TST_BINARY) $(LDFLAGS) $(LDLIBS)

re:	fclean all

tests_run: $(TST_BINARY)
	./$(TST_BINARY)
	gcovr --exclude $(TST_DIR)
	gcovr --exclude $(TST_DIR) --branches

debug: re $(DEBUG_BINARY)

clean:
	$(RM) $(OBJ) $(TST_OBJ)

fclean: clean
	$(RM) $(BINARY) $(TST_BINARY) $(DEBUG_BINARY)

.PHONY: all clean fclean tests_run re debug