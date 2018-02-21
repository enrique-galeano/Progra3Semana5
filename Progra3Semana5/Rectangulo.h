#ifndef RECTANGULO_H
#define  RECTANGULO_H

#include "Figura.h"

class Rectangulo: public Figura{
private:
  double largo, ancho;
public:
  Rectangulo(double, double);
  Rectangulo();
  virtual double getArea();
  virtual double getPerimetro();
  virtual string toString(); 
};
#endif
