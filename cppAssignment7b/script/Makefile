CC = g++
CPPFLAGS = -c -Wall
LDFLAGS = -lcppunit -lm
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/

CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient


all: app

app: $(OBJ)Main.o $(OBJ)Email.o 
	$(CC) -o app $(OBJ)Main.o  $(OBJ)Email.o
	mv app $(BIN) 

$(OBJ)Main.o: $(SRC)Main.cpp
	$(CC) $(CPPFLAGS) $(SRC)Main.cpp -I $(INCLUDE)
	mv Main.o $(OBJ)

$(OBJ)Email.o: $(SRC)Email.cpp
	$(CC) $(CPPFLAGS) $(SRC)Email.cpp -I $(INCLUDE)
	mv Email.o $(OBJ)

clean:
	@echo "Cleaning is in process:"
	rm -f a.out app *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)app
	@echo "Cleaning Done!"

valgrind:
	valgrind --leak-check=full $(BIN)/app
	mv valgrind $(BIN)

