CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: multiprcAssin

multiprcAssin: $(OBJ)/multiprcAssin.o
		$(CC) $(LFLAGS) $(BIN)/multiprcAssin $(OBJ)/multiprcAssin.o

$(OBJ)/multiprcAssin.o: $(SRC)/multiprcAssin.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/multiprcAssin.cpp 
		mv *.o $(OBJ)


clean:
		@echo "Cleaning is in Progress"
		rm -f a.out multiprcAssin
		rm -f *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/multiprcAssin
		@echo "Done!"

valgrind:
		valgrind --leak-check=full $(BIN)/app
		mv valgrind $(BIN)


