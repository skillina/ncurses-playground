ncurses-playground : main.o
	g++ -o ncurses-playground main.o -lncurses
main.o : main.cpp
	g++ -c main.cpp
