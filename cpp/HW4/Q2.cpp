#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
// By: Gordon Li

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

  // 1. Print out the class average:
  float average = float(total) / SIZE;
  cout << "The average grade is: " << setprecision(1) << fixed << average;
  cout << endl << endl;

  // 2. & 3. Print out the student that got the highest/lowest marks:
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

        // Sort the student scores
        sorted_score[i] = sorted_score[i + 1];
        sorted_score[i + 1] = tmp;

        // Sort the student id's
        sorted_id[i] = sorted_id[i + 1];
        sorted_id[i + 1] = tmp2;
      }
    }
  }

  cout << "Student that got the highest mark: " << sorted_id[SIZE - 1];
  cout << endl << endl;
  cout << "Student that got the lowest mark: " << sorted_id[0] << endl;

  cout << endl;
  cout << "Student letter grades:" << endl;

  // 4. Output the grades of each student to grades.txt & screen
  int ap = 0, a = 0, am = 0, bp = 0, b = 0, bm = 0, cp = 0, c = 0, cm = 0,
      d = 0, f = 0;

  for (int i = 0; i < SIZE; i++) {
    if (student_score[i] <= 100 && student_score[i] >= 90) {
      cout << student_id[i] << " A+" << endl;
      outputFile << student_id[i] << " A+" << endl;
      ap++;
    } else if (student_score[i] <= 89 && student_score[i] >= 85) {
      cout << student_id[i] << " A" << endl;
      outputFile << student_id[i] << " A" << endl;
      a++;
    } else if (student_score[i] <= 84 && student_score[i] >= 80) {
      cout << student_id[i] << " A-" << endl;
      outputFile << student_id[i] << " A-" << endl;
      am++;
    } else if (student_score[i] <= 79 && student_score[i] >= 76) {
      cout << student_id[i] << " B+" << endl;
      outputFile << student_id[i] << " B+" << endl;
      bp++;
    } else if (student_score[i] <= 75 && student_score[i] >= 72) {
      cout << student_id[i] << " B" << endl;
      outputFile << student_id[i] << " B" << endl;
      b++;
    } else if (student_score[i] <= 71 && student_score[i] >= 68) {
      cout << student_id[i] << " B-" << endl;
      outputFile << student_id[i] << " B-" << endl;
      bm++;
    } else if (student_score[i] <= 67 && student_score[i] >= 64) {
      cout << student_id[i] << " C+" << endl;
      outputFile << student_id[i] << " C+" << endl;
      cp++;
    } else if (student_score[i] <= 63 && student_score[i] >= 60) {
      cout << student_id[i] << " C" << endl;
      outputFile << student_id[i] << " C" << endl;
      c++;
    } else if (student_score[i] <= 59 && student_score[i] >= 56) {
      cout << student_id[i] << " C-" << endl;
      outputFile << student_id[i] << " C-" << endl;
      cm++;
    } else if (student_score[i] <= 55 && student_score[i] >= 50) {
      cout << student_id[i] << " D" << endl;
      outputFile << student_id[i] << " D" << endl;
      d++;
    } else {
      cout << student_id[i] << " F" << endl;
      outputFile << student_id[i] << " F" << endl;
      f++;
    }
  }

  // 5. Print the number of students that got each grade to grades.txt & screen
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

  cout << endl;
  cout << "Number of students that got A+: " << ap << endl;
  cout << "Number of students that got A: " << a << endl;
  cout << "Number of students that got A-: " << am << endl;
  cout << "Number of students that got B+: " << bp << endl;
  cout << "Number of students that got B: " << b << endl;
  cout << "Number of students that got B-: " << bm << endl;
  cout << "Number of students that got C+: " << cp << endl;
  cout << "Number of students that got C: " << c << endl;
  cout << "Number of students that got C-: " << cm << endl;
  cout << "Number of students that got D: " << d << endl;
  cout << "Number of students that got F: " << f << endl;

  inputFile.close();
  outputFile.close();
}
