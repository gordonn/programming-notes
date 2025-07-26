#include <iostream>
using namespace std;
// By: Gordon Li

bool all_the_same(double, double, double);
void displaySortedNumbers(double, double, double);

int main() {
  double a, b, c;
  cout << "Enter 3 numbers (1 2 3): ";
  cin >> a >> b >> c;
  if (all_the_same(a, b, c)) {
    cout << "All the numbers are the same." << endl;
  } else {
    cout << "Not all the numbers are the same." << endl;
  }

  cout << "Numbers displayed in increasing order: ";
  displaySortedNumbers(a, b, c);
}

bool all_the_same(double x, double y, double z) {
  if (x == y && y == z) {
    return true;
  } else {
    return false;
  }
}

void displaySortedNumbers(double x, double y, double z) {
  const int SIZE = 3;
  double arr[SIZE] = {x, y, z};

  // Bubble sort:
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE - i - 1; j++) {
      double tmp = arr[j];
      if (arr[j] > arr[j + 1]) {
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }

  // Display output
  for (int i = 0; i < SIZE; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
