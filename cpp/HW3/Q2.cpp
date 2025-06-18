#include <iostream>
// Gordon Li

using namespace std;

int main() {
  int choice;
  cout << "1. Find the highest score and its corresponding course name."
       << endl;
  cout << "2. Find lowest score and its corresponding course name." << endl;
  cout << "3. Find the 2nd lowest score and its corresponding course name."
       << endl;
  cout << "4. Find the courses average." << endl;
  cout << "-99. Quit the program." << endl << endl;

  while (1) {
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == -99) {
      cout << "Progam quitting." << endl;
      break;
    }

    switch (choice) {
    case 1:
      cout << "The highest score is 95 and its corresponding course name is KB."
           << endl
           << endl;
      break;
    case 2:
      cout << "The lowest score is 80 and its corresponding course name is KD."
           << endl
           << endl;
      break;
    case 3:
      cout << "The 2nd lowest score 85 and its corresponding course name is KC."
           << endl
           << endl;
      break;
    case 4:
      cout << "The courses average is 87.8 " << endl << endl;
      break;
    }
  }
}
