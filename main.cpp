#include <iostream>
#include "bankAccount.h"

using namespace std;

int main() {
    bankAccount account[10] = {
            {"Sir Charles Carden", "Checking", 5000.93, 1.5},
            {"John Wall", "Regular Savings", 3499.32, 1.00},
            {"Johnny Wall", "Extreme Savings", 3499.32, 3.00},
            {"Kimber Jennings", "Checking", 3499.32, 1.00},
            {"Sir Charles Second", "Regular Savings", 3499.32, 1.00},
            {"Jim Kirk", "Regular Savings", 3499.32, 1.00},
            {"Spock", "Regular Savings", 3499.32, 1.00},
            {"Adam Black", "Certificate of Deposit", 3499.32, 11.43},
            {"Joe Black", "Checking", 3499.32, 1.00},
            {"Glock 19", "Checking", 3499.32, 1.00},
    };

    for (int i = 0; i < 10; i++) {
        account[i].print();
        cout << endl;
    }
    return 0;
}
