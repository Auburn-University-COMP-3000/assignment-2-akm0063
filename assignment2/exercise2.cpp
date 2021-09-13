#include<iostream>

using namespace std;

void computeCoin(int coinValue, int& number, int& amountLeft) {
    number = amountLeft/coinValue;
    amountLeft = amountLeft - (number * coinValue);
}

int main() {

    int change;
    int number = 0;
    int amountLeft = 0;
    int quarters;
    int dimes;
    int pennies;
    char again;

    do {
        cout << "Enter an amount of change between 1 and 99 cents: " << endl;
    cin >> change;
    while (change < 1 || change > 99) {
        cout << "Please enter a value between 1 and 99:";
        cin >> change; 
    }

    cout << "\n" << change << " cents can be made of:" << endl;
    computeCoin(25,quarters, change);
    cout << quarters << " quarters" << endl;
    computeCoin(10, dimes, change);
    cout << dimes << " dimes" << endl;
    computeCoin(1, pennies, change);
    cout << pennies << " pennies" << endl; 

    cout << "\nDo you want to enter another value? Enter Y to convert again and any other key to exit:" << endl;
    cin >> again;
    }
    while (again == 'Y' || again == 'y');

    return 0;
}
