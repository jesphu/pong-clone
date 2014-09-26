all: pang.o Game.o
	g++ pang.o Game.o -o pang -lsfml-graphics -lsfml-window -lsfml-system
	./pang

pang.o: pang.cpp
	g++ -c pang.cpp

Game.o: Game.cpp Game.h
	g++ -c Game.cpp

clean:
	rm pang *.o
