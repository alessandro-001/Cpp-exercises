#include <iostream>

int main() {
  int year;

  //ask user to type a year
  std::cout << "Type a year to check if is a leap year or not: \n";
  std::cin >> year;

  //check if is a four digit number
  if (year < 1000 || year > 9999) {
    std::cout << "Invalid year entry!";
  } else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    std::cout << year << " Is a leap year.";
  } else {
    std::cout << year << " Is not a leap year";
  }

}