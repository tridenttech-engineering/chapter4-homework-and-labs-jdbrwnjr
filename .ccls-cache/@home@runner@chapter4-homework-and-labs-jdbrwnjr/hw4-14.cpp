// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <JD Brown> on <9-19-2024>

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double small = 0.0000;
  double medium = 0.0000;
  double large = 0.0000;
  double family = 0.0000;
  double total = 0.0000;
  
    // Input
    cout << "Enter number of small pizzas sold: ";
    cin >> small;
    cout << "Enter number of medium pizzas sold: ";
    cin >> medium;
    cout << "Enter number of large pizzas sold: ";
    cin >> large;
    cout << "Enter number of family pizzas sold: ";
    cin >> family;
  

    total =small+medium+large+family
   
    percentage_small = static_cast<double>(small) / total) * 100.00;
    percentage_medium = static_cast<double>(medium) / total) * 100.00;
    percentage_large = static_cast<double>(large) / total) * 100.00;
    percentage_family = static_cast<double>(family) / total) * 100.00;

    cout << fixed << setprecision(4) << endl;
    cout << "Total number of pizzas sold: " << total << endl;
    cout << "Percentage of small pizzas sold: " << percentage_small << "\n" << endl;
    cout << "Percentage of medium pizzas sold: " << percentage_medium << "\n" << endl;
    cout << "Percentage of large pizzas sold: " << percentage_large << "\n" << endl;
    cout << "Percentage of family pizzas sold: " << percentage_family << "\n" << endl;

    return 0;
}


