// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    
    int num_sm_rooms = 0;
    int num_bg_rooms = 0;
    const int price_sm_room = 25;
    const int price_bg_room = 35;
    double const taxes = 6.5;
    int estimate = 30;
    
   
    cout << "Welcome to AF's carpet cleaning service! \n" << endl;
    cout << "How many small rooms you want to clean? ";
    cin >> num_sm_rooms;
    cout << "How many big rooms you want to clean? ";
    cin >> num_bg_rooms;
    
    cout << "Price per small room: " << price_sm_room << endl;
    cout << "Price per big room: " << price_bg_room << endl;
    
    int smR_cost = price_sm_room * num_sm_rooms;
    int bgR_cost = price_bg_room * num_bg_rooms;
    
    cout << "-----------------------------"<< endl;
    
    cout << "Cost: £" << smR_cost + bgR_cost << endl;
    cout << "Taxes: £" << taxes << endl;
    
    cout << "-----------------------------"<< endl;
    
    cout << "Total cost: £" << smR_cost + bgR_cost + taxes << endl;
    cout << "This estimate is valid for " << estimate << " days";
 
    cout << endl;
    return 0;
}
