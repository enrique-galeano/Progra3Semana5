
output: main.o Circulo.o Figura.o
	g++ main.o Circulo.o Figura.o -o output
main.o: main.cpp
	g++ -c main.cpp

figura: Figura.cpp Figura.h
	g++ -c Figura.cpp

ciruclo: Circulo.cpp Circulo.h
	g++ -c Circulo.cpp

clean:
	rm *.o output
