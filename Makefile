all: shunt

shunt: main.o Queue.o Stack.o Tree.o Node.o
	g++ -g -o shunt main.o Queue.o Stack.o Tree.o Node.o

main.o: main.cpp
	g++ -g -c main.cpp

Queue.o: Queue.cpp Queue.h
	g++ -g -c Queue.cpp

Stack.o: Stack.cpp Stack.h
	g++ -g -c Stack.cpp

Tree.o: Tree.cpp Tree.h
	g++ -g -c Tree.cpp

Node.o: Node.cpp Node.h
	g++ -g -c Node.cpp
