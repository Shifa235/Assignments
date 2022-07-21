CC = g++
LFLAGS = -o
CFLAGS = -c -g
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: signalhandling	signalhandling2

signalhandling: $(OBJ)/signalhandling.o
		$(CC) $(LFLAGS) $(BIN)/signalhandling $(OBJ)/signalhandling.o

$(OBJ)/signalhandling.o: $(SRC)/signalhandling.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/signalhandling.cpp 
		mv *.o $(OBJ)

signalhandling: $(OBJ)/signalhandling2.o
		$(CC) $(LFLAGS) $(BIN)/signalhandling2 $(OBJ)/signalhandling2.o
  
$(OBJ)/signalhandling2.o: $(SRC)/signalhandling2.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/signalhandling2.cpp
		mv *.o $(OBJ)


clean:
		@echo "Cleaning is in Progress"
		rm -f a.out signalhandling
		rm -f *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/signalhandling	$(BIN)/signalhandling2.cpp
		@echo "Done!"

