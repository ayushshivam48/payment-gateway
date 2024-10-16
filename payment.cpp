#include <iostream>
#include <string>

using namespace std;

// Function to simulate payment gateway
void paymentGateway() {
    string paymentMethod;
    string cardNumber;
    string cvv;
    double balance = 10000.0;  // Example account balance
    double amount;

    cout << "Welcome to the Payment Gateway\n";
    cout << "Select your payment method (Credit/Debit/NetBanking): ";
    cin >> paymentMethod;

    if (paymentMethod == "Credit" || paymentMethod == "Debit") {
        // Simulating card payment
        cout << "Enter Card Number: ";
        cin >> cardNumber;

        cout << "Enter CVV: ";
        cin >> cvv;

        cout << "Enter Amount to Pay: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;  // Deduct the amount from balance
            cout << "Payment of $" << amount << " successful!" << endl;
            cout << "Remaining balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds! Payment failed." << endl;
        }
    } 
    else if (paymentMethod == "NetBanking") {
        // Simulating net banking payment
        string bankUsername, bankPassword;
        cout << "Enter NetBanking Username: ";
        cin >> bankUsername;

        cout << "Enter NetBanking Password: ";
        cin >> bankPassword;

        cout << "Enter Amount to Pay: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;  // Deduct the amount from balance
            cout << "Payment of $" << amount << " successful!" << endl;
            cout << "Remaining balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds! Payment failed." << endl;
        }
    } 
    else {
        cout << "Invalid payment method selected!" << endl;
    }
}

int main() {
    paymentGateway();  // Call the payment gateway function
    return 0;
}
