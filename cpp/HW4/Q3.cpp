#include <iomanip>
#include <iostream>
using namespace std;
// By: Gordon Li

int main() {
  const int ROWS = 6;
  const int COLLUMNS = 5;
  int arr[ROWS][COLLUMNS] = {{23, 5, 6, 15, 18},   {4, 16, 24, 67, 10},
                             {12, 54, 23, 76, 11}, {1, 12, 34, 22, 8},
                             {81, 54, 32, 67, 33}, {12, 34, 76, 78, 9}};

  // Print the array
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLLUMNS; j++) {
      cout << setw(7) << arr[i][j];
    }
    cout << endl;
  }

  cout << endl;

  // Sum of each row
  int sum = 0;

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLLUMNS; j++) {
      sum += arr[i][j];
    }
    cout << "Sum of row " << i + 1 << " = " << sum << endl;
    sum = 0;
  }

  cout << endl;

  // The largest element in each row

  int sorted[ROWS][COLLUMNS];
  // Copy elements of array into new array
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLLUMNS; j++) {
      sorted[i][j] = arr[i][j];
    }
  }

  for (int i = 0; i < ROWS; i++) {

    // Bubble sort for each collumn:
    for (int pass = 0; pass < COLLUMNS; pass++) {
      for (int j = 0; j < COLLUMNS - pass - 1; j++) {
        if (sorted[i][j] > sorted[i][j + 1]) {
          int tmp = sorted[i][j];
          sorted[i][j] = sorted[i][j + 1];
          sorted[i][j + 1] = tmp;
        }
      }
    }
  }

  // Print out the largest element in each row:
  for (int i = 0; i < ROWS; i++) {
    cout << "The largest element in row " << i + 1 << " = "
         << sorted[i][COLLUMNS - 1] << endl;
  }
}
