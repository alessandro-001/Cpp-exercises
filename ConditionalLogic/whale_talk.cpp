/*
There are a few simple rules for translating text to whale language:

There are no consonants. Only vowels excluding the letter y.
The u‘s and e‘s are extra long, so we must double them.
*/

#include <iostream>
#include <vector>
#include <string>

int main() {
  std::string input = "alessandro frondini";
  std::vector<char> vowels;

  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');

  std::vector<char> result;

  for (int i = 0; i < input.size(); i++) {
    for (int v = 0; v < vowels.size(); v++) {
      if (input[i] == vowels[v]) {
        result.push_back(input[i]);
        if (input[i] == 'e' || input[i] == 'u') {
          result.push_back(input[i]);
        }
      }
    }
  }

  for (int r = 0; r < result.size(); r++) {
    std::cout << result[r];
  }
}
