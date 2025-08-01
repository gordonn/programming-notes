#include <iomanip>
#include <iostream>
using namespace std;
// By: Gordon Li

void getJudgeData(double &);
double findLowest(const double[], const int = 5);
double findHighest(const double[], const int = 5);
void calcScore(const double[], const int = 5);

int main() {
  double score;
  const int SIZE = 5;
  double scores[SIZE];

  for (int i = 0; i < SIZE; i++) {
    getJudgeData(score);
    scores[i] = score;
  }
  calcScore(scores);
}

void getJudgeData(double &score) {
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

double findLowest(const double scores[], const int size) {
  double lowest = scores[0];

  for (int i = 1; i < size; i++) {
    if (scores[i] < lowest) {
      lowest = scores[i];
    }
  }
  return lowest;
}

double findHighest(const double scores[], const int size) {
  double highest = scores[0];

  for (int i = 1; i < size; i++) {
    if (scores[i] > highest) {
      highest = scores[i];
    }
  }
  return highest;
}

void calcScore(const double scores[], const int size) {
  double total = 0;
  for (int i = 0; i < size; i++) {
    total += scores[i];
  }
  total -= (findLowest(scores) + findHighest(scores));

  double average = total / 3;
  cout << "The average of the scores while excluding the smallest and largest "
          "scores is: "
       << setprecision(1) << fixed << average << endl;
}
