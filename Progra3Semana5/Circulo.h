#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura.h"
#include <string>

class Circulo:public Figura{
  private:
    double radio;
  public:
    Circulo();
    Circulo(double);
    double getArea();
    double getPerimetro();
    string toString();
    virtual ~Circulo();
};
#endif
