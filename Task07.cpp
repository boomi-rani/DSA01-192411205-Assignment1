
#include <iostream>
using namespace std;

// Procedural Approach
long long calculateFareProcedural(int zone)
{
    if (zone == 1)
        return 1000;

    if (zone == 2)
        return 2000;

    if (zone == 3)
        return 3000;

    return 0;
}

// OOP Approach
class SmartCard
{
private:
    long long balancePaise;

public:
    SmartCard(long long balance)
    {
        balancePaise = balance;
    }

    long long calculateFare(int zone)
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
            return 0;
        }
    }

    bool performJourney(int zone)
    {
        long long fare = calculateFare(zone);

        if ((balancePaise - fare) >= 5000)
        {
            balancePaise -= fare;
            return true;
        }

        return false;
    }

    void displayBalance()
    {
        cout << "Balance = ₹"
             << balancePaise / 100.0
             << endl;
    }
};

int main()
{
    cout << "--- Procedural Programming ---\n";

    long long fare = calculateFareProcedural(2);

    cout << "Middle Zone Fare = ₹"
         << fare / 100.0
         << endl;

    cout << "\n--- Object-Oriented Programming ---\n";

    SmartCard card(15000);

    card.displayBalance();

    if (card.performJourney(2))
        cout << "Journey Allowed\n";
    else
        cout << "Journey Denied\n";

    card.displayBalance();

    cout << "\nComparison:\n";
    cout << "Procedural: Functions work directly on data.\n";
    cout << "OOP: Data and behavior are combined in a class.\n";

    return 0;
}
