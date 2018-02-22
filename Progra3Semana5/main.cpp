#include "Figura.h"
#include "Circulo.h"
#include "Rectangulo.h"
#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

//Ciclo de vida de apuntadores en un vector
void ejemploVector();

int main(){
//  Figura* figura = new Circulo(10);
  Figura* figura = new Rectangulo(10, 20);
  cout<<figura->toString()<<"Su area es: "<<figura-> getArea()<<endl;
  cout <<endl;
  cout <<typeid(*figura).name()<<endl;
  ejemploVector();
  delete figura;
  return 0;
}


void ejemploVector(){
  vector<Figura*> myVector;
  for (int i = 0; i <= 10; i++) {
    myVector.push_back(new Circulo(i));
  }
  //calcular el area total de las figuras
  double areaTotal = 0;
  for (int i = 0; i < myVector.size(); i++) {
    areaTotal += myVector[i]->getArea();
  }

  //mostrar resultado
  cout << "EL area total es: "<<areaTotal <<endl;
  //liberar memoria
  for (int i = 0; i < myVector.size(); i++) {
    /* code */
    delete myVector[i];
    myVector[i] = NULL;
  }
  myVector.clear();//eliminar todas las casillas del vector
}
