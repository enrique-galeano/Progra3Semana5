#include <iostream>
#include "Circulo.h"
#include <string>
//#include <sstream>
#define PI 3.14159265



Circulo::Circulo(){
  radio = 1;
}

Circulo::Circulo(double radio){
   this ->radio = radio;

}

double Circulo::getArea(){
  return PI*radio*radio;
}
double Circulo::getPerimetro(){
  return PI*2*radio;
}

string Circulo::toString(){
  return "Es un circulo ";
}
