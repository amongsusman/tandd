/*
Name: Tyler Zhang
Program Name: Time and Date Lab
Date: 12/12/24
Extra: 
*/

#include <iostream>
#include <ctime>
using namespace std;
int main() {
    // Question 1: It is 7 pm in Tokyo. The offset is +9. 
    // Question 2: It is UTC-7.
    // Question 3:
    // Gets the amount of seconds since Unix epoch
    time_t now = time(nullptr);
    // Displays it in a human-readable string by taking the memory address of the time and converting it to local time
    cout << "Current time: " << ctime(&now);
    return 0;
}