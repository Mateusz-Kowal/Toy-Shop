CXX = g++
CXXFLAGS = -Wall -pedantic -O2 -std=c++17 -Wextra
LFLAGS =
OBJS = main.o produkt.o klocki.o lalki.o puzzle.o gry.o maskotki.o

all: program

program: $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@
clean:
	rm -f *.o prog
.PHONY: all clean
