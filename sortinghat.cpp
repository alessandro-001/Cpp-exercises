#include <iostream>

int main() {
  //houses
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  
  //answers
  int answer1, answer2, answer3, answer4;

  std::cout << "The Sorting Hat Quiz! \n";

  //question1
  std::cout << "\nQ1) When I'm dead, I want people to remember me as: \n";
  std::cout << "1. The good  \n";
  std::cout << "2. The great  \n";
  std::cout << "3. The wise  \n";
  std::cout << "4. The bold  \n\n";

  std::cin >> answer1;

  //conditional logic based on answer
  if (answer1 == 1) {
    hufflepuff += 1;
  } else if (answer1 == 2) {
    slytherin += 1;
  } else if (answer1 == 3) {
    ravenclaw += 1;
  } else if (answer1 == 4) {
    gryffindor += 1;
  } else {
    std::cout << "Invalid input! \n";
  }

  //question2
  std::cout << "\nQ2) Dawn or Dusk \n";
  std::cout << "1. Dawn  \n";
  std::cout << "2. Dusk  \n\n";

  std::cin >> answer2;

  //conditional logic based on answer
  if (answer2 == 1) {
    gryffindor += 1;
    ravenclaw += 1;
  } else if (answer2 == 2) {
    hufflepuff += 1;
    slytherin += 1;
  } else {
    std::cout << "Invalid input! \n";
  }

  //question3
  std::cout << "\nQ3) Which kind of instrument most pleases your ear? \n";
  std::cout << "1. The violin  \n";
  std::cout << "2. The trumpet  \n";
  std::cout << "3. The piano  \n";
  std::cout << "4. The drum  \n\n";

  std::cin >> answer3;

  //conditional logic based on answer
  if (answer3 == 1) {
    slytherin += 1;
  } else if (answer3 == 2) {
    hufflepuff += 1;
  } else if (answer3 == 3) {
    ravenclaw += 1;
  } else if (answer3 == 4) {
    gryffindor += 1;
  } else {
    std::cout << "Invalid input! \n";
  }

  //question4
  std::cout << "\nQ4) Which road tempts you most? \n";
  std::cout << "1. The wide, sunny grassy lane  \n";
  std::cout << "2. The narrow, dark, lantern-lit alley  \n";
  std::cout << "3. The twisting, leaf-strewn path through woods  \n";
  std::cout << "4. The cobbled street lined (ancient buildings)  \n\n";

  std::cin >> answer4;

  //conditional logic based on answer
  if (answer4 == 1) {
    hufflepuff += 1;
  } else if (answer4 == 2) {
    slytherin += 1;
  } else if (answer4 == 3) {
    gryffindor += 1;
  } else if (answer4 == 4) {
    ravenclaw += 1;
  } else {
    std::cout << "Invalid input! \n";
  }

  //house
  int max = 0;
  std::string house;

  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }

  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";   
  }

  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";  
  }

  std::cout << house << "!\n";

}






