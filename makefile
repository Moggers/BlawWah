all: clean main.o map/quadtree.o
	g++ main.o -o game -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -c main.cpp

map/quadtree.o: map/quadtree.cpp
	g++ -c map/quadtree.cpp

clean:
	rm -rf game main.o quadtree.o
