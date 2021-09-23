#include <iostream>
#include "Triangulos.h"

using namespace std;


int main() {

//Exemplo 1 : Utilizando construtor padrão e métodos modificadores
  Triangulos exemplo1;
  exemplo1.setCatetoA(8);
  exemplo1.setCatetoB(15);
  exemplo1.setHipotenusa(17);
  
  cout << endl << "Exemplo 1:" << endl;
  cout << "Perímetro:" << exemplo1.calculaPerimetro() << endl;
  cout << "Área: " << exemplo1.calculaArea() << endl;  
  cout << "Hipotenusa calculada:" << exemplo1.calcularHipotenusa() << endl;


//Exemplo 2 : Utilizando construtor apenas com os catetos
  Triangulos exemplo2(5, 12);  
  cout << endl << "Exemplo 2:" << endl;
  cout << "Perímetro:" << exemplo2.calculaPerimetro() << endl;
  cout << "Área: " << exemplo2.calculaArea() << endl;  
  cout << "Hipotenusa calculada:" << exemplo2.calcularHipotenusa() << endl;


//Exemplo 3 : Utilizando construtor com catetos e hipotenusa
  Triangulos exemplo3(36, 27, 45);  
  cout << endl << "Exemplo 3:" << endl;
  cout << "Perímetro:" << exemplo3.calculaPerimetro() << endl;
  cout << "Área: " << exemplo3.calculaArea() << endl;  
  cout << "Hipotenusa calculada:" << exemplo3.calcularHipotenusa() << endl;

//Exemplo 4 : Testando validação e correção da hipotenusa
  Triangulos exemplo4(7, 3, 20);  
  cout << endl << "Exemplo 4:" << endl;
  cout << "Área: " << exemplo4.calculaArea() << endl;  
  cout << "Hipotenusa :" << exemplo4.getHipotenusa()<< endl;
  
  exemplo4.setHipotenusa(exemplo4.calcularHipotenusa());

  cout << "Perímetro:" << exemplo4.calculaPerimetro() << endl;
  cout << "Área: " << exemplo4.calculaArea() << endl;  
  cout << "Hipotenusa :" << exemplo4.getHipotenusa()<< endl;

      
}