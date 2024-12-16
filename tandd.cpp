/*
Name: Tyler Zhang
Program Name: Time and Date Lab
Date: 12/12/24
Extra: None
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
    // Question 4:
    int offset;
    cout << "Input a timezone offset from UTC (in hours)." << endl;
    cin >> offset;
    now = time(nullptr);
    // 3600 because you need to convert the hours to seconds (60 minutes in an hour, 60 seconds in a minute)
    now += offset * 3600;
    tm* timeZoneTime = gmtime(&now);
    cout << "Current time in the specified time zone: " << asctime(timeZoneTime);
    // Question 5:
    int num;
    cout << "What is your favorite number?" << endl;
    now = time(nullptr);
    cin >> num;
    // Finds the current time subtracted by the time since question was asked
    cout << "The time that it took you to answer that question was: " << time(nullptr) - now << " seconds" << endl;
    return 0;
}
