#include <iostream>

using namespace std;

/*
 *    * *
 *   ** **
 *  *** ***
 * **** ****
 ****** *****
 * */

/* pseudo code:
 * print 4 spaces, space--, print i x *, print space, print i x*
 *
 * variables:
 * space = 4;
 * rows = 5;
 *
 * */

int main() {
  int spaces = 4;

  for (int i = 1; i <= 5; i++) {
    // print out spaces
    for (int h = 1; h <= spaces; h++) {
      cout << " ";
    }
    spaces--;

    for (int j = 1; j <= i; j++) {
      cout << "*";
    }

    cout << " ";

    for (int k = 1; k <= i; k++) {
      cout << "*";
    }
    cout << endl;
  }
}
