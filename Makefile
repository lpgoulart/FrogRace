PROG = bin/race
CC = g++
CFLAGS = -c
OBJCS = src/classes.o src/race.o

all: dir $(PROG)

dir:
	mkdir -p bin

$(PROG): $(OBJCS)
	$(CC) $(OBJCS) -o $(PROG)

race.o: src/race.cpp
	$(CC) $(CFLAGS) src/race.cpp

classes.o: src/classes.cpp
	$(CC) $(CFLAGS) src/classes.cpp

clean:
	-rm -rf src/*.o $(PROG)
