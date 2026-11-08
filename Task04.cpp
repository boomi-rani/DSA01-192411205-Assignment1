#include <iostream>
using namespace std;

int main()
{
    int farePaise = 2500;

    double fareRupees;

    // implicit conversion
    fareRupees = farePaise;

    cout << "Implicit int -> double:\n";
    cout << farePaise << " becomes "
         << fareRupees << endl;

    double surcharge = 6.75;

    // implicit conversion
    int roundedValue = surcharge;

    cout << "\nImplicit double -> int:\n";
    cout << surcharge
         << " becomes "
         << roundedValue
         << endl;

    double totalFare = 36.50;

    int explicitFare =
        static_cast<int>(totalFare);

    cout << "\nExplicit Conversion using static_cast:\n";
    cout << totalFare
         << " becomes "
         << explicitFare
         << endl;

    int hour = 9;

    double ratio =
        static_cast<double>(hour) / 2;

    cout << "\nAvoiding Integer Division:\n";
    cout << "9 / 2 = "
         << ratio
         << endl;

    return 0;
}
