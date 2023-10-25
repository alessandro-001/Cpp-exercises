#include <iostream>

int main() {
  double earthWeight;
  int planetNum;

  std::cout << "What is your earth weight in Kg? \n";
  std::cin >> earthWeight;

  std::cout << "\nEnter a planet number from the list below to know your weight in that system: \n\n";
  std::cout << "1.Mercury  2.Venus  3.Mars \n";
  std::cout << "4.Jupiter  5.Saturn 6.Uranus \n\n";
  std::cout << "What planet are you choosing?  \n";
  std::cin >> planetNum;

  switch (planetNum) {
    case 1:
      earthWeight = earthWeight * 0.38;
      break;
    case 2:
      earthWeight = earthWeight * 0.91;
      break;
    case 3:
      earthWeight = earthWeight * 0.38;
      break;
    case 4:
      earthWeight = earthWeight * 2.34;
      break;
    case 5:
      earthWeight = earthWeight * 1.06;
      break;
    case 6:
      earthWeight = earthWeight * 0.92;
      break;
    case 7:
      earthWeight = earthWeight * 1.19;
      break;       
  }

  std::cout << "\nYour weight is: " << earthWeight << "Kg!\n";

}