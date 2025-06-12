#include <iostream>
using namespace std;
// By: Gordon Li

int main() {
  int firstNum, secondNum;

  cout << "A) Enter two numbers where the first number is smaller then the "
          "first number e.g. (1 2): ";
  cin >> firstNum >> secondNum;
  cout << endl;

  int i = 0, currentNum, sum = 0;
  int interval = secondNum - firstNum;

  cout << "B) Odd numbers between first and second numbers:" << endl;
  for (int i = 0; i < interval; i++) {
    currentNum = firstNum + i;
    if (currentNum % 2 != 0 && currentNum != firstNum) {
      cout << currentNum << endl;
    }
  }
  cout << endl;

  cout << "C) Sum of all even numbers between first and second numbers:"
       << endl;
  for (int i = 0; i < interval; i++) {
    currentNum = firstNum + i;
    if (currentNum % 2 == 0 && currentNum != firstNum) {
      sum += currentNum;
    }
  }
  cout << sum << endl << endl;
  sum = 0;

  cout << "D) Numbers and their squares between 1 and 10:" << endl;
  for (int i = 2; i < 10; i++) {
    cout << i << "\t" << i * i << endl;
  }
  cout << endl;

  cout << "E) Sum of the squares of the odd numbers between the first number "
          "and second number:"
       << endl;
  for (i = 0; i < interval; i++) {
    currentNum = firstNum + i;
    if (currentNum % 2 != 0 && currentNum != firstNum) {
      sum += (currentNum * currentNum);
    }
  }
  cout << sum << endl;
}
