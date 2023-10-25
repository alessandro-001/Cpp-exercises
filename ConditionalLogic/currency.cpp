#include <iostream>

int main() {
  
  double pesos;
  double reias;
  double soles;
  double dollars;

  std::cout << "Enter number of Colombian pesos: \n";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian reias: \n";
  std::cin >> reias;

  std::cout << "Enter number of Peruvian soles: \n";
  std::cin >> soles;

  //pesos > usd = pesos * 0.05
  //reias > usd = reias * 0.19
  //soles > usd = soles * 0.26

  //total dollars after conversion
  dollars = (pesos * 0.05) + (reias * 0.19) + (soles * 0.26);

  //output result
  std::cout << "You have: " << dollars << " USD";


  
}