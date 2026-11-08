// Task12.cpp
// Extended Metro System

#include <iostream>
using namespace std;

enum Zone
{
    INNER = 1,
    MIDDLE = 2,
    OUTER = 3,
    AIRPORT = 4
};

struct MonthlyPass
{
    bool active;
    int zone1;
    int zone2;
};

long long getBaseFare(int zone)
{
    switch (zone)
    {
    case INNER:
        return 1000;

    case MIDDLE:
        return 2000;

    case OUTER:
        return 3000;

    case AIRPORT:
        return 6000;

    default:
        return -1;
    }
}

bool isPeakHour(int hour)
{
    return ((hour >= 8 && hour < 10) ||
            (hour >= 17 && hour < 20));
}

bool coveredByPass(
    const MonthlyPass &pass,
    int zone)
{
    return pass.active &&
           (zone == pass.zone1 ||
            zone == pass.zone2);
}

long long calculateFare(
    int zone,
    int hour,
    bool weekend)
{
    long long fare =
        getBaseFare(zone);

    if (fare == -1)
        return -1;

    if (weekend)
    {
        fare -= fare * 10 / 100;
    }
    else if (isPeakHour(hour))
    {
        fare += fare * 20 / 100;
    }

    return fare;
}

int main()
{
    MonthlyPass pass;

    pass.active = true;
    pass.zone1 = INNER;
    pass.zone2 = MIDDLE;

    int journeyZone = AIRPORT;
    int travelHour = 9;
    bool weekend = false;

    cout << "Extended Fare System\n";

    if (coveredByPass(pass, journeyZone))
    {
        cout << "Monthly Pass Accepted.\n";
        cout << "Fare = ₹0\n";
    }
    else
    {
        long long fare =
            calculateFare(
                journeyZone,
                travelHour,
                weekend);

        cout << "Fare = ₹"
             << fare / 100.0
             << endl;
    }

    cout << "\nNew Features Demonstrated:\n";
    cout << "1. Airport Zone = ₹60\n";
    cout << "2. Weekend Discount = 10%\n";
    cout << "3. Peak and Weekend rules not combined\n";
    cout << "4. Monthly Pass for two selected zones\n";
    cout << "5. Zone eligibility checking\n";

    return 0;
}
