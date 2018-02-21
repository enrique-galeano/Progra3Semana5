#include "Rectangulo.h"

Rectangulo::Rectangulo(double largo, double ancho){
  this -> largo = largo;
  this -> ancho = ancho;

}

Rectangulo::Rectangulo(){
  largo = ancho = 0;
}
double Rectangulo::getArea(){
  return largo*ancho;
}
double Rectangulo::getPerimetro(){
  return 2*largo+ 2*ancho;
}

string Rectangulo::toString(){
  return "Esto es un Rectangulo";
}
