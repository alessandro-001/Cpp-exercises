#include <iostream>
#include <cmath>

int main() {
  //declare a b c
  double a, b, c;


  //plug in 6, -7, -3 for a, b, and c
  std::cout << "Enter a: \n";
  std::cin >> a;
  std::cout << "Enter b: \n";
  std::cin >> b;
  std::cout << "Enter c: \n";
  std::cin >> c;

  //declare roots
  double root1, root2;

  root1 = (-b + std::sqrt((b*b) - (4*a*c))) / (2*a);

  root2 = (-b - std::sqrt((b*b) - (4*a*c))) / (2*a);

  //output
  std::cout << "Root 1 is: " << root1 << " \n";
  std::cout << "Root 2 is: " << root2 << " \n";




  
  
}