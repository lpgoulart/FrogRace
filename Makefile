PROG = bin/race
CC = g++
CFLAGS = -W -Wall -pedantic -ansi -O0
OBJCS = src/classes.o src/race.o

all: dir $(PROG)

dir:
	mkdir -p bin

$(PROG): $(OBJCS)
	$(CC) $(OBJCS) -o $(PROG)

race.o: src/race.cpp
	$(CC) $(CFLAGS) -c src/race.cpp

classes.o: src/classes.cpp
	$(CC) $(CFLAGS) -c src/classes.cpp

clean:
	-rm -rf src/*.o $(PROG)
