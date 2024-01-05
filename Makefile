##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## epitech > epita
##

BINARY_NAME = pushswap_checker

CC = ghc
CFLAGS = -Wall -Wextra

SRC = pushswap_checker.hs

all: $(BINARY_NAME)

$(BINARY_NAME): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.hi *.o

fclean: clean
	rm -f $(BINARY_NAME)

re: fclean all

.PHONY: all clean fclean re