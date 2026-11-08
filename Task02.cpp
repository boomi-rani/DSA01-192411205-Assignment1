#include <iostream>
using namespace std;

#define PEAK_SURCHARGE_PERCENT 20

const int MIN_BALANCE_RULE = 50;
constexpr int DAYS_IN_WEEK = 7;

enum Zone
{
    INNER = 10,
    MIDDLE = 20,
    OUTER = 30
};

enum class TravelStatus
{
    Allowed,
    Denied
};

int main()
{
    int passengerCount = 5; // identifier

    Zone selectedZone = MIDDLE;

    TravelStatus status = TravelStatus::Allowed;

    cout << "Passenger Count: " << passengerCount << endl;
    cout << "Zone Fare: ₹" << selectedZone << endl;
    cout << "Peak Surcharge: "
         << PEAK_SURCHARGE_PERCENT << "%\n";

    cout << "Minimum Balance Rule: ₹"
         << MIN_BALANCE_RULE << endl;

    cout << "Days in Week: "
         << DAYS_IN_WEEK << endl;

    if (status == TravelStatus::Allowed)
    {
        cout << "Travel Allowed\n";
    }

    cout << "\nExamples Demonstrated:\n";
    cout << "Tokens, keywords, identifiers, constants\n";
    cout << "#define, const, constexpr\n";
    cout << "enum and enum class\n";

    return 0;
}
