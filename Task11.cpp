// Task11.cpp
// Configurable Fare System Design

#include <iostream>
using namespace std;

struct FareConfiguration
{
    long long innerFare;
    long long middleFare;
    long long outerFare;

    int peakSurchargePercent;

    long long minimumBalance;
};

bool isPeakHour(int hour)
{
    return ((hour >= 8 && hour < 10) ||
            (hour >= 17 && hour < 20));
}

long long calculateFare(
    int zone,
    int hour,
    const FareConfiguration &config)
{
    long long fare = 0;

    switch (zone)
    {
    case 1:
        fare = config.innerFare;
        break;

    case 2:
        fare = config.middleFare;
        break;

    case 3:
        fare = config.outerFare;
        break;

    default:
        return -1;
    }

    if (isPeakHour(hour))
    {
        fare += fare *
                config.peakSurchargePercent / 100;
    }

    return fare;
}

int main()
{
    FareConfiguration config;

    config.innerFare = 1000;
    config.middleFare = 2000;
    config.outerFare = 3000;

    config.peakSurchargePercent = 20;

    config.minimumBalance = 5000;

    int zone = 2;
    int hour = 9;

    long long fare =
        calculateFare(zone, hour, config);

    cout << "Configurable Fare System\n";

    cout << "Fare = ₹"
         << fare / 100.0
         << endl;

    cout << "\nAdvantages:\n";
    cout << "- Fare values can change easily.\n";
    cout << "- Surcharge percentage can change easily.\n";
    cout << "- Less program modification required.\n";

    return 0;
}
