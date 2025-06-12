#include <iostream>
#include <string>
// By: Gordon Li

using namespace std;

int main() {
  int score1, score2, score3, total;
  string input = " ";

  while (input != "Q" && input != "q") {
    cout << "Enter the score for each subject e.g. (70 80 90): ";
    cin >> score1 >> score2 >> score3;
    total = score1 + score2 + score3;
    if ((score1 > 80 && score2 > 80 && score3 > 80) && total > 250) {
      cout << "The grade is A+." << endl;
    } else if ((score1 > 60 && score2 > 60 && score3 > 60) && total > 200) {
      cout << "The grade is A." << endl;
    } else if (score1 < 50 || score2 < 50 || score3 < 50) {
      cout << "The grade is F." << endl;
    } else {
      cout << "The grade is B." << endl;
    }
    cout << "Do you want to quit? (Q/N): ";
    cin >> input;
  }
}
