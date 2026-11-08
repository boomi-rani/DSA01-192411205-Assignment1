#include <iostream>
#include <string>
using namespace std;

class SmartCard
{
private:
    string cardHolderName;
    long long balancePaise;

public:
    SmartCard(string name, long long balance)
    {
        cardHolderName = name;

        if (balance >= 0)
            balancePaise = balance;
        else
            balancePaise = 0;
    }

    void recharge(long long amountPaise)
    {
        if (amountPaise > 0)
            balancePaise += amountPaise;
    }

    bool deductFare(long long farePaise)
    {
        if (balancePaise - farePaise >= 5000) // ₹50 minimum balance rule
        {
            balancePaise -= farePaise;
            return true;
        }
        return false;
    }

    void displayCardInfo() const
    {
        cout << "\nCard Holder: " << cardHolderName;
        cout << "\nBalance: ₹" << balancePaise / 100.0 << endl;
    }

    long long getBalance() const
    {
        return balancePaise;
    }
};

int main()
{
    SmartCard card("Rahul", 20000); // ₹200

    card.displayCardInfo();

    cout << "\nDeducting ₹20 fare...\n";

    if (card.deductFare(2000))
        cout << "Journey Allowed\n";
    else
        cout << "Journey Denied\n";

    card.displayCardInfo();

    cout << "\nOOP Concepts Demonstrated:\n";
    cout << "1. Class: SmartCard\n";
    cout << "2. Object: card\n";
    cout << "3. Data Members: cardHolderName, balancePaise\n";
    cout << "4. Member Functions: recharge(), deductFare()\n";
    cout << "5. Encapsulation: private data members\n";
    cout << "6. Invariant: balance cannot become negative and must maintain ₹50 minimum balance.\n";

    return 0;
}
