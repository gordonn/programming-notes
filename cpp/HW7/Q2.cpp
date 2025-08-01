#include <iomanip>
#include <iostream>
using namespace std;
// By: Gordon Li

void getData(int[][2], const string[], const int = 12);
double averageHigh(const int[][2], const int = 12);
double averageLow(const int[][2], const int = 12);
int indexHighTemp(const int[][2], const int = 12);
int indexLowTemp(const int[][2], const int = 12);

int main() {
  string months[12] = {"January",   "February", "March",    "April",
                       "May",       "June",     "July",     "August",
                       "September", "October",  "November", "December"};
  int temp[12][2];

  getData(temp, months);
  cout << "The average of all the highest temperatures is: " << setprecision(2)
       << fixed << averageHigh(temp) << endl;
  cout << "The average of all the lowest temperatures is: " << setprecision(2)
       << fixed << averageLow(temp) << endl;

  cout << "The month with the hottest high temperature is: "
       << months[indexHighTemp(temp)] << endl;

  cout << "The month with the coldest low temperature is: "
       << months[indexLowTemp(temp)] << endl;
}

void getData(int temp[][2], const string month[], const int size) {
  for (int i = 0; i < size; i++) {
    cout << "Enter the highest temperature (°C) for " << month[i] << ": ";
    cin >> temp[i][0];
    cout << "Enter the lowest temperature (°C) for " << month[i] << ": ";
    cin >> temp[i][1];
    cout << endl;
  }
}

double averageHigh(const int temp[][2], const int size) {
  double total = 0;
  for (int i = 0; i < size; i++) {
    total += double(temp[i][0]);
  }
  double average = total / double(size);
  return average;
}

double averageLow(const int temp[][2], const int size) {
  double total = 0;
  for (int i = 0; i < size; i++) {
    total += double(temp[i][1]);
  }
  double average = total / double(size);
  return average;
}

int indexHighTemp(const int temp[][2], const int size) {
  // Initialize array that contains the highest temperatures and there indexes
  int highest[size][2];
  for (int i = 0; i < size; i++) {
    highest[i][0] = temp[i][0];
    highest[i][1] = i;
  }

  // Bubble sort
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      int tmp = highest[j][0];
      int tmp2 = highest[j][1];
      if (highest[j][0] > highest[j + 1][0]) {

        highest[j][0] = highest[j + 1][0];
        highest[j + 1][0] = tmp;

        highest[j][1] = highest[j + 1][1];
        highest[j + 1][1] = tmp2;
      }
    }
  }

  return highest[size - 1][1];
}

int indexLowTemp(const int temp[][2], const int size) {
  // Initialize array that contains the lowest temperatures and there indexes
  int lowest[size][2];
  for (int i = 0; i < size; i++) {
    lowest[i][0] = temp[i][1];
    lowest[i][1] = i;
  }

  // Bubble sort
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      int tmp = lowest[j][0];
      int tmp2 = lowest[j][1];

      if (lowest[j][0] > lowest[j + 1][0]) {
        lowest[j][0] = lowest[j + 1][0];
        lowest[j + 1][0] = tmp;

        lowest[j][1] = lowest[j + 1][1];
        lowest[j + 1][1] = tmp2;
      }
    }
  }

  return lowest[0][1];
}
