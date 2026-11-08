// Task10.cpp
// Large Scale Journey Calculations and Overflow Demonstration

#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    const long long farePaise = 3000; // ₹30

    long long journeys1 = 20000;
    long long journeys2 = 500000;
    long long journeys3 = 3000000;

    cout << "Using long long\n";

    cout << "20,000 Journeys Revenue = ₹"
         << (journeys1 * farePaise) / 100.0
         << endl;

    cout << "500,000 Journeys Revenue = ₹"
         << (journeys2 * farePaise) / 100.0
         << endl;

    cout << "3,000,000 Journeys Revenue = ₹"
         << (journeys3 * farePaise) / 100.0
         << endl;

    cout << "\nOverflow Demonstration\n";

    int intRevenue =
        static_cast<int>(journeys3 * farePaise);

    cout << "Stored in int = "
         << intRevenue
         << endl;

    auto start = high_resolution_clock::now();

    long long total = 0;

    for (long long i = 0; i < journeys1; i++)
    {
        total += farePaise;
    }

    auto stop = high_resolution_clock::now();

    auto duration =
        duration_cast<microseconds>(stop - start);

    cout << "\nExecution Time Example\n";
    cout << "Total Revenue = ₹"
         << total / 100.0
         << endl;

    cout << "Time Taken = "
         << duration.count()
         << " microseconds\n";

    cout << "\nRecommendation:\n";
    cout << "Use long long for journey statistics and money values.\n";

    return 0;
}
