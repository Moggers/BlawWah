all: game.cpp clean
	g++ -o game.o game.cpp

clean:
	rm -rf game.o
