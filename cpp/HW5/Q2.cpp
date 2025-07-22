#include <iomanip>
#include <iostream>
using namespace std;
// By: Gordon Li

int main() {
  const int SIZE = 7;
  long int empId[SIZE] = {5658845, 4520125, 7895122, 8777541,
                          8451277, 1302850, 7580489};
  int hours[SIZE];
  double payRate[SIZE];
  double wages[SIZE];

  for (int i = 0; i < SIZE; i++) {
    cout << "Enter the details for employee id " << empId[i] << endl;

    bool valid = false;
    while (!valid) {
      cout << "Hours (int): ";
      cin >> hours[i];

      if (hours[i] >= 0) {
        valid = true;
      } else {
        cout << "Please enter a value for Hours that is greater than or equal "
                "to 0."
             << endl;
      }
    }

    valid = false;
    while (!valid) {
      cout << "Pay Rate (>=15.00): ";
      cin >> payRate[i];
      if (payRate[i] >= 15.00) {
        valid = true;
      } else {
        cout << "Please enter a value for Pay Rate that is greater than or "
                "equal to $15.00."
             << endl;
      }
    }
    cout << endl;
  }

  for (int i = 0; i < SIZE; i++) {
    wages[i] = payRate[i] * hours[i];
  }

  // Display info:
  for (int i = 0; i < SIZE; i++) {
    cout << "Gross wage for employee id " << empId[i] << ": $" << fixed
         << setprecision(2) << wages[i] << endl;
  }
}
