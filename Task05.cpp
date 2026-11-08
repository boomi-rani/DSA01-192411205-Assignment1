#include <iostream>
using namespace std;

int main()
{
    long long innerFare = 1000;   // ₹10
    long long middleFare = 2000;  // ₹20
    long long outerFare = 3000;   // ₹30

    cout << "Arithmetic Operators\n";
    cout << "Inner + Middle = ₹" << (innerFare + middleFare) / 100.0 << endl;
    cout << "Outer - Inner = ₹" << (outerFare - innerFare) / 100.0 << endl;
    cout << "Middle * 2 = ₹" << (middleFare * 2) / 100.0 << endl;
    cout << "Outer / 2 = ₹" << (outerFare / 2) / 100.0 << endl;
    cout << "3000 % 700 = " << (3000 % 700) << endl;

    cout << "\nRelational Operators\n";

    bool comparison1 = outerFare > middleFare;
    bool comparison2 = innerFare == 1000;

    cout << "outerFare > middleFare : " << comparison1 << endl;
    cout << "innerFare == 1000 : " << comparison2 << endl;

    cout << "\nLogical Operators\n";

    bool peakHour = true;
    bool sufficientBalance = true;

    cout << "peakHour && sufficientBalance = "
         << (peakHour && sufficientBalance) << endl;

    cout << "peakHour || false = "
         << (peakHour || false) << endl;

    cout << "!peakHour = "
         << (!peakHour) << endl;

    cout << "\nAssignment Operators\n";

    long long balance = 10000; // ₹100

    balance += 2000;
    cout << "After += ₹20 : ₹" << balance / 100.0 << endl;

    balance -= 1000;
    cout << "After -= ₹10 : ₹" << balance / 100.0 << endl;

    balance *= 2;
    cout << "After *= 2 : ₹" << balance / 100.0 << endl;

    balance /= 2;
    cout << "After /= 2 : ₹" << balance / 100.0 << endl;

    cout << "\nOperator Precedence Example\n";

    int result1 = 10 + 20 * 3;
    int result2 = (10 + 20) * 3;

    cout << "10 + 20 * 3 = " << result1 << endl;
    cout << "(10 + 20) * 3 = " << result2 << endl;

    return 0;
}
