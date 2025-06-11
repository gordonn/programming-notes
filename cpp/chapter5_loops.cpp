#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  /*prefix mode (the variable is incremented/decremented before it is used in
   * the expression):*/
  int i;
  int x = ++i; // i becomes 6, then x is assigned 6 (i is incremented first)

  /*postfix mode (the variable is incremented/decremented after it is used in
   * the expression):*/
  i = 5;
  x = i++; // x is assigned 5, the i becomes 6

  /* illegal expression: c = ++(a * b); this is because we are trying to
   * increment a value that is not an Ivalue (it's a temporary value)*/

  /*while loops are pretest loops, meiang it tests expressions before each
   * iteration (will not iterate if the test expression is false to start
   * with):*/
  int number = 5;
  while (number > 0) {
    cout << "Hello\n";
    number--; // counter
  }
  cout << endl;

  cout << "Using while loop for input validation:" << endl;
  cout << "Enter a number in the range 1-100: ";
  cin >> number;
  while (number < 1 || number > 100) {
    cout << "ERROR: Enter a value in the range 1-100: ";
    cin >> number;
  }
  cout << endl;

  /*do-while loop is a posttest loop (always performs at least one iteration):*/

  cout << "User controlled do-while loop:" << endl;
  int score1, score2, score3;
  double average;
  char again;
  do {
    cout << "Enter 3 scores and I will average them: ";
    cin >> score1 >> score2 >> score3;

    average = (score1 + score2 + score3) / 3.0;
    cout << "The average is " << average << ".\n";

    cout << "Do you want to average another set? (Y/N) ";
    cin >> again;
  } while (again == 'Y' || again == 'y');
  cout << endl;

  /*the for loop is a pretest loop (can replace while loops when the loop
   * requires initialization):*/

  /*1. Conditional loop: executed as long as a particular condition exists.
   * 2. Count-controlled loops.*/

  cout << "User controlled for loop example:" << endl;
  int minNumber, maxNumber;

  cout << "I will display a table of numbers and their squares.\nEnter the "
          "starting number: ";
  cin >> minNumber;
  cout << "Enter the ending number: ";
  cin >> maxNumber;

  cout << "Number Number Squared:\n";

  for (int num = minNumber; num <= maxNumber; num++) {
    cout << num << "\t" << (num * num) << endl;
  }
  cout << endl;

  cout << "Using multiple statements in the initialization and update "
          "expressions:"
       << endl;
  int q, y;
  for (q = 1, y = 1; q <= 5; q++, y++) {
    cout << x << " plus " << y << " equals " << (x + y) << endl;
  }
  cout << endl;

  cout << "Omitting the for loops expressions: " << endl;
  int num2 = 1;
  int maxValue = 5;
  for (; num2 <= maxValue; num2++) {
    cout << num2 << "\t" << (num2 * num2) << endl;
  }
  cout << endl;

  /*Sentinels (a value that cannot be part of a list and signals that there are
   * no more values to be entered.), e.g. while (points != -1)*/

  /*Nested Loops:*/
  /*A good example is a clock (hands tick at different intervals):*/
  cout << fixed << right;
  cout.fill('0');
  for (int hours = 0; hours < 24; hours++) {
    for (int minutes = 0; minutes < 60; minutes++) {
      for (int seconds = 0; seconds < 60; seconds++) {
        cout << setw(2) << hours << ":";
        cout << setw(2) << minutes << ":";
        cout << setw(2) << seconds << endl;
      }
    }
  }
}
