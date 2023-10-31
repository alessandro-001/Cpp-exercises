#include <iostream>
using namespace std;

int main() {
    enum Direction {
        left, right, up, down
    };

    int directionInt;
    Direction heading;

    cout << "Enter a direction (0 for left, 1 for right, 2 for up, 3 for down): ";
    cin >> directionInt;

    if (directionInt >= left && directionInt <= down) {
        heading = static_cast<Direction>(directionInt);

        switch (heading) {
            case left:
                cout << "Going left" << endl;
                break;
            case right:
                cout << "Going right" << endl; 
                break;
            case up:
                cout << "Going up" << endl; 
                break;
            case down:
                cout << "Going down" << endl;
                break;
            default:
                cout << "Invalid direction" << endl;
        }
    } else {
        cout << "Invalid direction" << endl;
    }

    cout <<  endl;
    return 0;
}
