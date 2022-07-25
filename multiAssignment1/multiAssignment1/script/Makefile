CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
INC = inc
SRC = src
OBJ = obj
BIN = bin
IFLAGS = -I$(INC)/

all: app

app: $(OBJ)/main.o $(OBJ)/multiprcAssin.o
		$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/main.o $(OBJ)/multiprcAssin.o

$(OBJ)/main.o:	$(SRC)/main.cpp
		$(CC) $(CFLAGS) $(SRC)/main.cpp $(IFLAGS)
		mv *.o $(OBJ)/

$(OBJ)/multiprcAssin.o: $(SRC)/multiprcAssin.cpp
		$(CC) $(CFLAGS) $(SRC)/multiprcAssin.cpp $(IFLAGS) 
		mv *.o $(OBJ)/

clean:
		@echo "Cleaning is in Progress"
		rm -f a.out app
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/app
		@echo "Done!"




