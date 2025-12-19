#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    string colors[4] = {"red", "blue", "yellow", "black"};
    string money[4] = {"2500", "3400", "4000", "1200"}; 

    string choice;
    cout << "which car model do you want ? (Volvo, BMW, Ford, Mazda): \n";
    cin >> choice;

    bool found = false;
    for (int i = 0; i < 4; i++) {
        if (cars[i] == choice) {
            cout << "You choose " << choice << ".\n";
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Sorry, that model is not available.\n";

    string choicecolor;
    cout << "which color do you want for your car ? (red, blue, yellow, black): \n";
    cin >> choicecolor;

    found = false;  
    for (int i = 0; i < 4; i++) {
        if (colors[i] == choicecolor) {
            cout << "You choose the color " << choicecolor << ".\n";
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Sorry, that color is not available.\n";

    cout << "the price of these cars are : \n";
    for (int i = 0; i < 4; i++) {
        cout << money[i] << " ";
    }
    cout << "\n";

    string choicemoney;
    cin >> choicemoney;

    found = false;  
    for (int i = 0; i < 4; i++) {
        if (money[i] == choicemoney) {
            cout << "You choose the price of " << choicemoney << ".\n";
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Sorry, that price is not available.\n";

    
    string paymentMethod;
    cout << "Payment method? (cash or card): \n";
    cin >> paymentMethod;


  if (paymentMethod == "cash") {
    cout << "You selected cash. Please pay " << choicemoney << " at delivery.\n";
  } 
   else if (paymentMethod == "card") {
    string cardNumber;
    string cardPassword;

    cout << "Enter your card number: \n";
    cin >> cardNumber;

    cout << "Enter 4-digit card password: \n";
    cin >> cardPassword;

    bool validPassword = cardPassword.length() == 4;
    for (char c : cardPassword) {
        if (!isdigit(c)) {
            validPassword = false;
            break;
        }
    }

    if (validPassword) {
        cout << "Payment successful. Thank you!\n";
    }
        else {
        cout << "Invalid password. Password must be exactly 4 digits.\n";
    }
}  
    return 0;
}

    