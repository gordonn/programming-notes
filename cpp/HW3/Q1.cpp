#include <iomanip>
#include <iostream>
// By: Gordon Li

using namespace std;

int main() {
  int adult_cost = 40, child_cost = 20, senior_cost = 30, choice, months;

  cout << "Health Club Membership Menu" << endl << endl;
  cout << "1. Standard Adult Membership" << endl;
  cout << "2. Child Membership " << endl;
  cout << "3. Senior Citizen Membership" << endl;
  cout << "4. Quit the Program" << endl << endl;

  while (choice != 4) {
    cout << "Enter your choice: ";
    cin >> choice;

    while (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
      cout << "Please enter a valid menu choice: ";
      cin >> choice;
    }

    switch (choice) {
    case 1:
      cout << "For how many months? ";
      cin >> months;
      cout << "The total charges are" << endl;
      cout << "$" << fixed << setprecision(2)
           << float(months) * float(adult_cost) << endl
           << endl;
      break;
    case 2:
      cout << "For how many months? ";
      cin >> months;
      cout << "The total charges are" << endl;
      cout << "$" << fixed << setprecision(2)
           << float(months) * float(child_cost) << endl
           << endl;
      break;
    case 3:
      cout << "For how many months? ";
      cin >> months;
      cout << "The total charges are" << endl;
      cout << "$" << fixed << setprecision(2)
           << float(months) * float(senior_cost) << endl
           << endl;
      break;
    case 4:
      cout << "Program is quitting" << endl;
      break;
    }
  }
}
