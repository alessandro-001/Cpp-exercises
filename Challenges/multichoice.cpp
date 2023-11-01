// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!


////used old version C++11 so if not working, to run type:   g++ -std=c++11 multichoice.cpp
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> numbers {1, 2, 3, 4, 5}; //started with a non empty vector
    char choice {};
    
    cout << "--- Select an option from the menu ---" << endl;
    cout << "P. Print numbers" << endl;
    cout << "A. Add a number" << endl;
    cout << "M. Display the mean of the numbers" << endl;
    cout << "S. Display the smallest of the numbers" << endl;
    cout << "L. Display the largest of the numbers" << endl;
    cout << "Q. Quit program" << endl;
    cout << "\nEnter your choice: ";
    cin >> choice;
    
    choice = toupper(choice); //convert the char directly to upercase
    
    if (choice == 'P') { //print [] if vector is empty
        if (numbers.size() == 0) { 
            cout << "[] - the list is empty" << endl;
        } else { //print the content of the vector
            cout << "[ ";
            for (auto num: numbers)
                cout << num << " ";
            cout << "]" << endl;
        }
        
    } else if (choice == 'A') { //add a number
        int added_num {};
        cout << "\nPlease add an integer: ";
        cin >> added_num;
        numbers.push_back(added_num);
        cout << added_num << " added!" << endl;
        //display again the vector
        cout << "Your numbers are now: [ ";
        for (auto num: numbers)
            cout << num << " ";
        cout << "]" << endl;
        
    } else if (choice == 'M') { //calculate the mean
        int sum {};
        int mean{};
        for (auto num: numbers) {
            sum += num;
        }
        mean = sum / numbers.size();
        cout << "The mean of the numbers is: ";
        cout << mean;
        
    } else if (choice == 'S') { //find the smallest number
        if (numbers.size() == 0) {
            cout << "Unable to determine the smallest number - list is empty" << endl;
        } else {
            int smallest = numbers.at(0);
            for (auto num: numbers) {
                if (num < smallest) {
                    smallest = num;
                }
            }
            cout << "The smallest number is " << smallest << endl;
        }
        
    } else if (choice == 'L') { //find the largest number
        if (numbers.size() == 0) {
            cout << "Unable to determine the smallest number - list is empty" << endl;
        } else {
            int biggest = numbers.at(0);
            for (auto num: numbers) {
                if (num > biggest) {
                    biggest = num;
                }
            }
            cout << "The biggest number is " << biggest << endl;
        } 
    } else if (choice == 'Q') {
        cout << "\nGoodbye!" << endl;
    } else {
        cout << "\nInvalid choice, press enter end re-run the program. Bye!";
    }
        
    return 0;
}