CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: Signalhandling

Sighandling: $(OBJ)/Signalhandling.o
		$(CC) $(LFLAGS) $(BIN)/Signalhandling $(OBJ)/Signalhandling.o

$(OBJ)/Signalhandling.o: $(SRC)/Signalhandling.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/Signalhandling.cpp 
		mv *.o $(OBJ)


clean:
		@echo "Cleaning is in Progress"
		rm -f a.out Signalhandling
		rm -f *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/Signalhandling
		@echo "Done!"

valgrind:
		valgrind --leak-check=full $(BIN)/app
		mv valgrind $(BIN)

