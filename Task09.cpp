// Task09.cpp
// Testing and Validation of Metro Fare Logic

#include <iostream>
using namespace std;

long long getBaseFare(int zone)
{
    switch (zone)
    {
    case 1:
        return 1000;
    case 2:
        return 2000;
    case 3:
        return 3000;
    default:
        return -1;
    }
}

bool isPeakHour(int hour)
{
    return ((hour >= 8 && hour < 10) ||
            (hour >= 17 && hour < 20));
}

void runTest(int testNo, int zone,
             int hour,
             long long balancePaise)
{
    cout << "\nTest " << testNo << endl;

    if (hour < 0 || hour > 23)
    {
        cout << "Result: Invalid Hour Input\n";
        return;
    }

    long long fare = getBaseFare(zone);

    if (fare == -1)
    {
        cout << "Result: Invalid Zone\n";
        return;
    }

    if (isPeakHour(hour))
    {
        fare += fare * 20 / 100;
    }

    cout << "Fare = ₹" << fare / 100.0 << endl;

    if (balancePaise - fare >= 5000)
        cout << "Journey Allowed\n";
    else
        cout << "Journey Denied (Insufficient Balance)\n";
}

int main()
{
    cout << "Metro Fare Validation Tests\n";

    runTest(1, 1, 12, 10000); // normal

    runTest(2, 2, 8, 10000); // peak starts

    runTest(3, 2, 10, 10000); // peak ends

    runTest(4, 3, 17, 15000); // evening peak start

    runTest(5, 3, 20, 15000); // evening peak end

    runTest(6, 5, 12, 10000); // invalid zone

    runTest(7, 1, -1, 10000); // invalid hour

    runTest(8, 3, 9, 7000); // insufficient balance

    long long rechargeAmount = -5000;

    cout << "\nNegative Recharge Test\n";

    if (rechargeAmount < 0)
        cout << "Invalid Recharge Amount\n";

    cout << "\nStudent/Senior Discounts:\n";
    cout << "Assignment requires clarification.\n";

    return 0;
}
