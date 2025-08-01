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
       << fixed << averageHigh(temp) << " °C" << endl;
  cout << "The average of all the lowest temperatures is: " << setprecision(2)
       << fixed << averageLow(temp) << " °C" << endl;

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
  int highIndex = 0;

  for (int i = 0; i < size; i++) {
    if (temp[i][0] > temp[highIndex][0]) {
      highIndex = i;
    }
  }

  return highIndex;
}

int indexLowTemp(const int temp[][2], const int size) {
  int lowIndex = 0;

  for (int i = 0; i < size; i++) {
    if (temp[i][1] < temp[lowIndex][1]) {
      lowIndex = i;
    }
  }

  return lowIndex;
}
