#include <iostream>

int main(){
  int V1, V2;
  std::cout << "ingresa el primer valor: ";
  std::cin >> V1;
  std::cout << "ingresa el segundo valor: ";
  std::cin >> V2;

  int suma = V1 + V2;
  int resta = V1 - V2;
  int multiplicacion = V1 * V2;
  int division = V1 / V2;
  int residuo = V1 % V2;

  std::cout << "la suma es: " << suma << std::endl;
  std::cout << "la resta es: " << resta << std::endl;
  std::cout << "la multiplicacion es: " << multiplicacion << std::endl;
  std::cout << "la division es: " << division << std::endl;
  std::cout << "el residuo es: " << residuo << std::endl;

}
