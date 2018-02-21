#include "Figura.h"
#include "Circulo.h"
#include "Rectangulo.h"
#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
//  Figura* figura = new Circulo(10);
  Figura* figura = new Rectangulo(10, 20);
  cout<<figura->toString()<<"Su area es: "<<figura-> getArea()<<endl;
  cout <<endl;
  //cout <<typeid(*figura).name()<<endl;
  delete figura;
  return 0;
}
