#include <iostream>
#include <math.h>
#include "Triangulos.h"

Triangulos::Triangulos(){
  catetoA = 0; 
  catetoB = 0; 
  hipotenusa = 0;
}

Triangulos::Triangulos(double a, double b){
  catetoA = a; 
  catetoB = b; 
  hipotenusa = calcularHipotenusa();
  
}



Triangulos::Triangulos(double a, double b, double h){
  catetoA = a; 
  catetoB = b; 
  hipotenusa = h;
}

void Triangulos::setCatetoA(double a){
  catetoA = a;  
}

void Triangulos::setCatetoB(double b){
  catetoB = b;  
}

void Triangulos::setHipotenusa(double h){
  hipotenusa = h;  
}

double Triangulos::getCatetoA(){
  return catetoA;
}

double Triangulos::getCatetoB(){
  return catetoB;
}

double Triangulos::getHipotenusa(){
  return hipotenusa;
}

bool Triangulos::validarTrianguloRetangulo(){
  return round(pow(getCatetoA(),2) + pow(getCatetoB(),2))== round(pow(getHipotenusa(),2));
}

double Triangulos::calculaPerimetro(){
    return getCatetoA() + getCatetoB() + getHipotenusa();
}

double Triangulos::calculaArea(){
  if(!validarTrianguloRetangulo()){
    std::cout <<"Esta função calcula área apenas para triângulo retângulo!"<< std::endl;
    return 0;
  }
  return (getCatetoA() * getCatetoB()) / 2;
}

double Triangulos::calcularHipotenusa(){
  return sqrt(pow(getCatetoA(),2) + pow(getCatetoB(),2));
}
