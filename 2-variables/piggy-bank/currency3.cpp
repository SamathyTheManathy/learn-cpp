/*I made the code to request the conversion rates from the user
So as to always be an up to date program 
I apologise if this is not the correct way to upload my creation,
I am new to github*/

#include <iostream>
// Declaring variables
double pesos, reais, soles, dollars;
double conversion_pesos, conversion_reais, conversion_soles;



int main() {
  
  std::cout << "Enter conversion rate for Colombian Pesos: ";
  std::cin >> conversion_pesos;
  
  std::cout << "Enter conversion rate for Brazilian Reais: ";
  std::cin >> conversion_reais;
  
  std::cout << "Enter conversion rate for Peruvian Soles: ";
  std::cin >> conversion_soles;
  
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  
  /*
  Conversion Rates for:
  Pesos 0.00032
  Reais 0.25
  Soles 0.30
  28/03/19
  */
  //Converting the currencies to USD
  dollars = (conversion_pesos * pesos) + (conversion_reais * reais) + (conversion_soles * soles);
  
//output in US dollars  
 std::cout << "US Dollars = $" << dollars << "\n";
  
  
}
//Credits to the people at Codecademy for teaching me this :D 
// -SamathyTheManathy
