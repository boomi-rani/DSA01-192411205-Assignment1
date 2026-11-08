#include <iostream>
using namespace std;

bool isPeakHour(int hour)
{
    return ((hour >= 8 && hour < 10) ||
            (hour >= 17 && hour < 20));
}

int main()
{
    int zone;
    int hour;
    long long balancePaise;

    cout << "Metro Smart Card System\n";

    cout << "Enter zone (1=Inner, 2=Middle, 3=Outer): ";
    cin >> zone;

    cout << "Enter hour (0-23): ";
    cin >> hour;

    cout << "Enter card balance in rupees: ";
    cin >> balancePaise;

    balancePaise *= 100;

    if (hour < 0 || hour > 23)
    {
        cout << "Invalid hour input.\n";
        return 0;
    }

    long long farePaise = 0;

    switch (zone)
    {
    case 1:
        farePaise = 1000;
        break;

    case 2:
        farePaise = 2000;
        break;

    case 3:
        farePaise = 3000;
        break;

    default:
        cout << "Invalid zone.\n";
        return 0;
    }

    if (isPeakHour(hour))
    {
        farePaise = farePaise + (farePaise * 20 / 100);
    }

    cout << "\nCalculated Fare = ₹"
         << farePaise / 100.0 << endl;

    if ((balancePaise - farePaise) >= 5000)
    {
        cout << "Journey Allowed\n";
        cout << "Remaining Balance = ₹"
             << (balancePaise - farePaise) / 100.0
             << endl;
    }
    else
    {
        cout << "Journey Denied\n";
        cout << "Balance must remain at least ₹50 after travel.\n";
    }

    return 0;
}
