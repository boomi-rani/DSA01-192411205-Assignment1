// Task08.cpp
// Safe Input and Output Handling

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main()
{
    string passengerName;
    int zone;
    double balance;

    cout << "Enter passenger name: ";
    getline(cin, passengerName);

    cout << "Enter zone (1-3): ";

    while (!(cin >> zone))
    {
        cout << "Invalid input. Enter an integer: ";

        cin.clear();

        cin.ignore(
            numeric_limits<streamsize>::max(),
            '\n');
    }

    while (zone < 1 || zone > 3)
    {
        cout << "Zone must be between 1 and 3: ";
        cin >> zone;
    }

    cout << "Enter balance in rupees: ";

    while (!(cin >> balance))
    {
        cout << "Invalid amount. Enter again: ";

        cin.clear();

        cin.ignore(
            numeric_limits<streamsize>::max(),
            '\n');
    }

    cout << "\nFormatted Output\n";

    cout << fixed << setprecision(2);

    cout << "Passenger Name : "
         << passengerName << endl;

    cout << "Selected Zone  : "
         << zone << endl;

    cout << "Card Balance   : ₹"
         << balance << endl;

    return 0;
}
