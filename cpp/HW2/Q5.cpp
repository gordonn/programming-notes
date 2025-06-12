#include <iomanip>
#include <iostream>
using namespace std;
// By: Gordon Li

int main() {
  float RATE = 1.04, COST = 2400;

  for (int i = 1; i < 7; i++) {
    COST *= RATE;
    cout << "Year " << i << " projected rate: $" << fixed << setprecision(2)
         << COST << endl;
  }
}
