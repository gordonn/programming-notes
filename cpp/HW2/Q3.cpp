#include <iostream>
using namespace std;
// By: Gordon Li

int main() {
  int firstNum, secondNum;

  cout << "A) Enter two numbers where the first number is smaller then the "
          "second number e.g. (1 2): ";
  cin >> firstNum >> secondNum;
  cout << endl;

  int i = 0, currentNum, sum = 0;
  int interval = secondNum - firstNum;

  cout << "B) Odd numbers between first and second number:" << endl;
  do {
    currentNum = firstNum + i;
    if (currentNum % 2 != 0 && currentNum != firstNum) {
      cout << currentNum << endl;
    }
    i++;
  } while (i < interval);
  i = 0;
  cout << endl;

  cout << "C) Sum of all even numbers between first and second number:" << endl;
  do {
    currentNum = firstNum + i;
    if (currentNum % 2 == 0 && currentNum != firstNum) {
      sum += currentNum;
    }
    i++;
  } while (i < interval);
  cout << sum << endl << endl;
  sum = 0;

  i = 1;
  cout << "D) Numbers and their squares between 1 and 10:" << endl;
  do {
    cout << i << "\t" << i * i << endl;
    i++;
  } while (i <= 10);
  i = 0;
  cout << endl;

  cout << "E) Sum of the squares of the odd numbers between first and second "
          "number:"
       << endl;
  do {
    currentNum = firstNum + i;
    if (currentNum % 2 != 0 && currentNum != firstNum) {
      sum += (currentNum * currentNum);
    }
    i++;
  } while (i < interval);
  cout << sum << endl;
}
