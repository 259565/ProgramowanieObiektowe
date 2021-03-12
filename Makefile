FLAGS = -Wall -pedantic -std=c++11 

Project1.out : main.o menu.o tablica.o tablica_wysw.o
	g++ -o $@ $<

main.o : main.cpp
	g++ -c ${FLAGS} -o $@ $<

menu.o : menu.cpp
	g++ -c ${FLAGS} -o $@ $<

tablica.o : tablica.cpp
	g++ -c ${FLAGS} -o $@ $<

tablica_wysw.o : tablica_wysw.cpp
	g++ -c ${FLAGS} -o $@ $<
