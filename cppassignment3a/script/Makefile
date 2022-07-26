CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
BIN = ./bin
OBJ = ./obj
SRC = ./src
INC = ./inc

all: employee

employee: $(OBJ)/main.o $(OBJ)/employee.o
		$(CC) $(LFLAGS) $(BIN)/employee $(OBJ)/main.o $(OBJ)/employee.o

$(OBJ)/main.o: $(SRC)/main.cpp  
		$(CC) $(CFLAGS) $(SRC)/main.cpp -I $(INC)
		mv main.o $(OBJ)                                                                                                                                        

$(OBJ)/employee.o: $(SRC)/employee.cpp
		$(CC) $(CFLAGS) $(SRC)/employee.cpp -I $(INC)
		mv employee.o $(OBJ)

clean:
		@echo "Cleaning Process"
		rm -f a.out employee
		rm -f *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/employee
		@echo "Done"
