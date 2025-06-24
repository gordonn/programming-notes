// Insert your code here.
#include <iostream>

using namespace std;
int main() {
  int choice;
  int duration;
  double calories;

  cout << "Fitness Activity Tracker" << endl << endl;
  cout << "1. Jogging" << endl;
  cout << "2. Cycling" << endl;
  cout << "3. Swimming" << endl;
  cout << "4. Quit" << endl << endl;

  cout << "Enter your choice (1-4): ";
  cin >> choice;

  if (!(choice >= 1 && choice <= 4)) {
    cout << "\nValid choices are 1 through 4. Try again.\n";
    return 0;
  }

  switch (choice) {
  case 1:
    cout << "\nEnter the time spent jogging in minutes: ";
    cin >> duration;
    calories = 0.75 * duration;
    cout << "\nCalories burned: " << calories;
    break;

  case 2:
    cout << "\nEnter the time spent cycling in minutes: ";
    cin >> duration;
    calories = 0.5 * duration;
    cout << "\nCalories burned: " << calories;
    break;

  case 3:
    cout << "\nEnter the time spent swimming in minutes: ";
    cin >> duration;
    calories = 0.8 * duration;
    cout << "\nCalories burned: " << calories;
    break;

  case 4:
    cout << "\nProgram ending.\n";
    break;
  }
}
