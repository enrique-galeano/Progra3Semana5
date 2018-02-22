
output: main.o Circulo.o Figura.o Rectangulo.o
	g++ main.o Circulo.o Figura.o Rectangulo.o -o output
main.o: main.cpp
	g++ -c main.cpp

figura: Figura.cpp Figura.h
	g++ -c Figura.cpp

ciruclo: Circulo.cpp Circulo.h
	g++ -c Circulo.cpp

rectangulo: Rectangulo.cpp Rectangulo.h
		g++ -c Rectangulo.cpp
clean:
	rm *.o output
