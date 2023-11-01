// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!


////used old version C++11 so if not working, to run type:   g++ -std=c++11 encryption.cpp
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string secret_message {};
    cout << "Enter secret message: " << endl;
    getline(cin, secret_message);
    
    //encrypt message
    string encrypted_message {};
    for (char original_char: secret_message) {
        if(isalpha(original_char)) {
            size_t position = alphabet.find(original_char);
            char substitute_char = key[position];
            encrypted_message += substitute_char;
        } else {
            encrypted_message += original_char;
        }
    }
    //print message encrypted
    cout << "Encrypted message: " << encrypted_message << endl;
    
    //decryption message
    string decrypted_message {};
    for (char encrypted_char : encrypted_message) {
        if (isalpha(encrypted_char)) {
            size_t position = key.find(encrypted_char);
            char original_char = alphabet[position];
            decrypted_message += original_char;
        } else {
            decrypted_message += encrypted_char;
        }
    }
    //print decrypted message
    cout << "Decrypted message: " << decrypted_message << endl;
    
    cout << endl;
    return 0;
}