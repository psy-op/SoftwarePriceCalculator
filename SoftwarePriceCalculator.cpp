// SoftwarePriceCalculator
// TITLE: Software Price Calculator

#include <iostream>
using namespace std;

// Function to calculate the total price based on the quantity and apply discounts
int main() {
    cout << "\n";
    int quantity = 0;
    const int price = 99;
    cout << "What is the number of units sold? \n";
    cin >> quantity;

    // Using the user input to calculate a set price for each box
    // and adding a discount according to how much the user bought
    // and outputs the total final price for the user
    if (quantity <= 0) {
        cout << "Use a positive number bigger than zero.";
    } else if (quantity < 10) {
        int total = quantity * price;
        cout << "Your total is " << total << ".\n";

    } else if (quantity >= 10 && quantity <= 19) {
        int total = (quantity * price) - (quantity * price * 0.20);
        cout << "Your total is " << total << ".\n";

    } else if (quantity >= 20 && quantity <= 49) {
        int total = (quantity * price) - (quantity * price * 0.30);
        cout << "Your total is " << total << ".\n";

    } else if (quantity >= 50 && quantity <= 99) {
        int total = (quantity * price) - (quantity * price * 0.40);
        cout << "Your total is " << total << ".\n";

    } else if (quantity >= 100) {
        int total = (quantity * price) - (quantity * price * 0.50);
        cout << "Your total is " << total << ".\n";
    }
}
