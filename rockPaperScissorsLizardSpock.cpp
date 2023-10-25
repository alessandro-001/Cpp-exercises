#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
  srand(time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "Rock Paper Scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✌️ (Scissors)\n";
  std::cout << "2) ✊ (Rock)\n";
  std::cout << "3) ✋ (Paper)\n";
  std::cout << "4) 🦎 (Lizard)\n";
  std::cout << "5) 🖖 (Spock)\n";

  std::cout << "Choose your weapon (1-5): ";
  std::cin >> user;

  //your choice
  std::string userChoice;
  switch (user) {
    case 1:
      userChoice = "Scissors";
      break;
    case 2:
      userChoice = "Rock";
      break;
    case 3:
      userChoice = "Paper";
      break;
    case 4:
      userChoice = "Lizard";
      break;
    case 5:
      userChoice = "Spock";
      break;
    default:
      userChoice = "Invalid choice";
  }

  //computer choice
  std::string computerChoice;
  switch (computer) {
    case 1:
      computerChoice = "Scissors";
      break;
    case 2:
      computerChoice = "Rock";
      break;
    case 3:
      computerChoice = "Paper";
      break;
    default:
      computerChoice = "Invalid choice";
  }

  std::cout << "You chose " << userChoice << " and the computer chose " << computerChoice << ". ";

  if (user == computer) {
    std::cout << "It's a tie!";
  } else if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)) {
    std::cout << "You win!";
  } else if ((user == 1 && computer == 2) || (user == 2 && computer == 3) || (user == 3 && computer == 1)) {
    std::cout << "Computer wins!";
  } else {
    std::cout << "Invalid choices. It's a tie!";
  }

  return 0;
}
