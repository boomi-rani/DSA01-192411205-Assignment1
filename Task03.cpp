#include <iostream>
#include <climits>
using namespace std;

int main()
{
    cout << "Data Type Sizes\n";
    cout << "int: " << sizeof(int) << " bytes\n";
    cout << "long long: " << sizeof(long long) << " bytes\n";
    cout << "float: " << sizeof(float) << " bytes\n";
    cout << "double: " << sizeof(double) << " bytes\n";

    long long farePaise = 3000; // ₹30

    double fareRupees = 30.0;

    cout << "\nFare using integer paise = "
         << farePaise << " paise\n";

    cout << "Fare using double = ₹"
         << fareRupees << endl;

    cout << "\nType Compatibility\n";

    int trips = 10;
    double total = trips * fareRupees;

    cout << "Total Fare: ₹"
         << total << endl;

    cout << "\nInteger Overflow Example\n";

    int value = INT_MAX;

    cout << "INT_MAX = "
         << value << endl;

    value += 1;

    cout << "After Overflow = "
         << value << endl;

    cout << "\nRecommendation:\n";
    cout << "Use long long paise for money calculations.\n";

    return 0;
}
