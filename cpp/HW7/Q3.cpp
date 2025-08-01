#include <iostream>
using namespace std;
// By: Gordon Li
void getJudgeData(int &);

int main() {
  int score;
  const int SIZE = 5;
  int scores[SIZE];

  for (int i = 0; i < SIZE; i++) {
    getJudgeData(score);
    scores[i] = score;
  }
}

void getJudgeData(int &score) {
  bool valid = false;
  while (!valid) {
    cout << "Enter judge's score: ";
    cin >> score;
    if (score >= 0 && score <= 10) {
      valid = true;
    } else {
      cout << "Please enter a valid score (0-10)" << endl;
    }
  }
}
