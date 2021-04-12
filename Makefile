FLAGS = -Wall -pedantic -std=c++11 

a.out : main.o menu.o tablica.o tablica_wysw.o pliki.o
	g++ -o a.out main.o menu.o tablica.o tablica_wysw.o pliki.o

main.o : main.cpp
	g++ -c ${FLAGS} -o main.o main.cpp

menu.o : menu.cpp
	g++ -c ${FLAGS} -o menu.o menu.cpp

tablica.o : tablica.cpp
	g++ -c ${FLAGS} -o tablica.o tablica.cpp

tablica_wysw.o : tablica_wysw.cpp
	g++ -c ${FLAGS} -o tablica_wysw.o tablica_wysw.cpp

pliki.o : pliki.cpp
	g++ -c ${FLAGS} -o pliki.o pliki.cpp