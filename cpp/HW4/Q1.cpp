#include <iostream>
using namespace std;
// By: Gordon Li

int main() {
  const int SIZE = 12;
  int arr[SIZE] = {10, 20, 12, 19, 99, 76, 8, 8, 24, 55, 32, 12};

  // 1. Print every element at an even index:
  cout << "Every element at an even index:" << endl;
  for (int i = 0; i < SIZE; i++) {
    if (i % 2 == 0) {
      cout << arr[i] << " ";
    }
  }

  cout << endl << endl;

  // 2. Print every even element:
  cout << "Every even element:" << endl;
  for (int i = 0; i < SIZE; i++) {
    if (arr[i] % 2 == 0) {
      cout << arr[i] << " ";
    }
  }

  cout << endl << endl;

  // 3. Print every element in reverse order:

  // Temporary array for storing elements in reverse order
  int tmp[SIZE];

  cout << "Every element in reverse order:" << endl;
  for (int i = 0; i < SIZE; i++) {
    tmp[i] = arr[SIZE - 1 - i];
    cout << tmp[i] << " ";
  }

  cout << endl << endl;

  // 4. Print only the first and last element:
  cout << "First and last element:" << endl;
  cout << arr[0] << " " << arr[SIZE - 1];

  cout << endl << endl;

  // 5. Print the second-largest element in the array:
  // Copy elements of one array into another
  int sorted[SIZE];

  for (int i = 0; i < SIZE; i++) {
    sorted[i] = arr[i];
  }

  // Bubble sort algorithm:
  for (int pass = 0; pass < SIZE; pass++) {
    for (int i = 0; i < SIZE - 1 - pass; i++) {
      if (sorted[i] > sorted[i + 1]) {
        int tmp = sorted[i];
        sorted[i] = sorted[i + 1];
        sorted[i + 1] = tmp;
      }
    }
  }

  cout << "Second-largest element:" << endl;
  cout << sorted[SIZE - 2];

  cout << endl << endl;

  // 6. Print true if the array contains two adjacent values:
  bool adjacent = false;
  for (int i = 0; i < SIZE - 1; i++) {
    if (arr[i] == arr[i + 1]) {
      adjacent = true;
    }
  }

  if (adjacent) {
    cout << "Adjacent values: True";
  }

  else {
    cout << "Adjacent values: False";
  }

  cout << endl << endl;

  // 7. Print true if the array contains duplicate values:
  bool duplicate = false;
  for (int i = 0; i < SIZE - 1; i++) {
    if (sorted[i] == sorted[i + 1]) {
      duplicate = true;
    }
  }

  if (duplicate) {
    cout << "Duplicate values: True";
  } else {
    cout << "Duplicate values: False";
  }

  cout << endl << endl;

  // 8. Swap the first and last element then print the array:
  int tmp2[SIZE];

  for (int i = 0; i < SIZE; i++) {
    tmp2[i] = arr[i];
  }

  int temp;
  temp = tmp2[0];
  tmp2[0] = tmp2[SIZE - 1];
  tmp2[SIZE - 1] = temp;

  cout << "First and last elements swapped:" << endl;

  for (int i = 0; i < SIZE; i++) {
    cout << tmp2[i] << " ";
  }

  cout << endl << endl;

  // 9. Replace all even numbers with 0 and then print the array:
  int tmp3[SIZE];

  for (int i = 0; i < SIZE; i++) {
    tmp3[i] = arr[i];
  }

  for (int i = 0; i < SIZE; i++) {
    if (arr[i] % 2 == 0) {
      tmp3[i] = 0;
    }
  }

  cout << "Even elements replaced with 0:" << endl;
  for (int i = 0; i < SIZE; i++) {
    cout << tmp3[i] << " ";
  }

  cout << endl;
}
