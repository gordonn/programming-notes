#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  ifstream inputFile("ClassMarks.txt");
  ofstream outputFile("grades.txt");

  int total = 0;

  const int SIZE = 20;
  string student_id[SIZE];
  int student_score[SIZE];

  string id;
  int score;
  int i = 0;

  while (inputFile >> id >> score) {
    student_id[i] = id;
    student_score[i] = score;
    i++;
    total += score;
  }

  // Print out the class average:
  float average = float(total) / SIZE;
  cout << "The average grade is: " << setprecision(2) << fixed << average;
  cout << endl << endl;

  // Print out the student that got the highest mark:
  string sorted_id[SIZE];
  int sorted_score[SIZE];

  // Copy contents of array
  for (int i = 0; i < SIZE; i++) {
    sorted_id[i] = student_id[i];
    sorted_score[i] = student_score[i];
  }

  // Bubble sort:
  for (int pass = 0; pass < SIZE; pass++) {
    for (int i = 0; i < SIZE - 1 - pass; i++) {
      if (sorted_score[i] >= sorted_score[i + 1]) {
        int tmp = sorted_score[i];
        string tmp2 = sorted_id[i];

        sorted_score[i] = sorted_score[i + 1];
        sorted_score[i + 1] = tmp;

        sorted_id[i] = sorted_id[i + 1];
        sorted_id[i + 1] = tmp2;
      }
    }
  }

  // Student that got the highest mark:
  cout << "Student that got the highest mark: " << sorted_id[SIZE - 1];
  cout << endl << endl;
  cout << "Student that got the lowest mark: " << sorted_id[0] << endl;

  int ap = 0, a = 0, am = 0, bp = 0, b = 0, bm = 0, cp = 0, c = 0, cm = 0,
      d = 0, f = 0;

  // Outputing the results as grades to grades.txt
  for (int i = 0; i < SIZE; i++) {
    if (student_score[i] <= 100 && student_score[i] >= 90) {
      outputFile << student_id[i] << " A+" << endl;
      ap++;
    } else if (student_score[i] <= 89 && student_score[i] >= 85) {
      outputFile << student_id[i] << " A" << endl;
      a++;
    } else if (student_score[i] <= 84 && student_score[i] >= 80) {
      outputFile << student_id[i] << " A-" << endl;
      am++;
    } else if (student_score[i] <= 79 && student_score[i] >= 76) {
      outputFile << student_id[i] << " B+" << endl;
      bp++;
    } else if (student_score[i] <= 75 && student_score[i] >= 72) {
      outputFile << student_id[i] << " B" << endl;
      b++;
    } else if (student_score[i] <= 71 && student_score[i] >= 68) {
      outputFile << student_id[i] << " B-" << endl;
      bm++;
    } else if (student_score[i] <= 67 && student_score[i] >= 64) {
      outputFile << student_id[i] << " C+" << endl;
      cp++;
    } else if (student_score[i] <= 63 && student_score[i] >= 60) {
      outputFile << student_id[i] << " C" << endl;
      c++;
    } else if (student_score[i] <= 59 && student_score[i] >= 56) {
      outputFile << student_id[i] << " C-" << endl;
      cm++;
    } else if (student_score[i] <= 55 && student_score[i] >= 50) {
      outputFile << student_id[i] << " D" << endl;
      d++;
    } else {
      outputFile << student_id[i] << " F" << endl;
      f++;
    }
  }

  outputFile << endl;
  outputFile << "Number of students that got A+: " << ap << endl;
  outputFile << "Number of students that got A: " << a << endl;
  outputFile << "Number of students that got A-: " << am << endl;
  outputFile << "Number of students that got B+: " << bp << endl;
  outputFile << "Number of students that got B: " << b << endl;
  outputFile << "Number of students that got B-: " << bm << endl;
  outputFile << "Number of students that got C+: " << cp << endl;
  outputFile << "Number of students that got C: " << c << endl;
  outputFile << "Number of students that got C-: " << cm << endl;
  outputFile << "Number of students that got D: " << d << endl;
  outputFile << "Number of students that got F: " << f << endl;

  inputFile.close();
  outputFile.close();
}
