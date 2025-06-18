#include <iomanip>
#include <iostream>
// By: Gordon Li

using namespace std;

int main() {
  int age;
  float income, balance, loan;
  while (1) {
    cout << "Please enter your age in years or -99 to quit: ";
    cin >> age;
    if (age == -99) {
      cout << "Program quitting" << endl;
      break;
    }
    cout << "Please enter your annual income in dollars: ";
    cin >> income;
    cout << "What is your current account balance in dollars: ";
    cin >> balance;

    if (income < (0.5 * balance)) {
      loan = income * 2;
    } else {
      loan = balance / 2;
    }

    if (age > 21 && (income > 25000 || balance > 100000)) {
      cout << "You can borrow up to $" << fixed << setprecision(2) << loan
           << endl
           << endl
           << endl;
    } else {
      cout << "Unfortunately, you don't quality for a loan." << endl
           << endl
           << endl;
    }
  };
}
