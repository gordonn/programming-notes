#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // Finding the highest value in a array
  const int SIZE = 5;
  int numbers[SIZE] = {5, 4, 3, 2, 1};
  int highest = numbers[0];
  for (int i = 1; i < SIZE; i++) {
    if (numbers[i] > highest) {
      highest = numbers[i];
    }
  }

  cout << highest << endl;

  // Find the lowest value in a array:
  int lowest = numbers[0];
  for (int i = 1; i < SIZE; i++) {
    if (numbers[i] < lowest) {
      highest = numbers[i];
    }
  }

  cout << lowest << endl;

  // Removing an element:
  int pos = 3;
  int current_size = 5;
  int value[5] = {5, 4, 3, 2, 1};

  // Will remove the 3 from the array
  for (int i = pos; i < current_size; i++) {
    value[i - 1] = value[i];
  }
  current_size--;

  for (int i = 0; i < current_size; i++) {
    cout << value[i] << " ";
  }
  cout << endl;

  // Inserting a element:
  current_size = 6;
  const int CAPACITY = 7;
  pos = 2;
  int value2[5] = {6, 4, 3, 2, 1};

  if (current_size < CAPACITY) {
    current_size++;
    for (int i = current_size - 1; i > pos; i--) {
      value2[i] = value2[i - 1];
    }
    value2[pos] = 5;
  }
}
