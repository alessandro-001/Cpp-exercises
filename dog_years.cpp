#include <iostream>
#include <string>

int main() {
  // Declare variables
  std::string dog_name;
  int dog_age;
  int early_years;
  int later_years;
  int human_years;

  // Get user input for dog's name and age
  std::cout << "Enter your dog's name: ";
  std::cin >> dog_name;
  std::cout << "Enter your dog's age in dog years: ";
  std::cin >> dog_age;

  // First 2 dog years
  early_years = 21;
  
  // Equation to convert dog years to human
  later_years = (dog_age - 2) * 4;

  // Human years conversion formula
  human_years = early_years + later_years;

  std::cout << "My name is " << dog_name << "! Ruff ruff!, I am " << human_years << " years old in human years.";

  return 0;
}
