#include <iostream>
using namespace std;
// By: Gordon Li

string middle(string str);
string repeat(string str, int n);
int count_vowels(string str);

int main() {
  string input;
  int num;
  cout << "Enter a string: ";
  cin >> input;
  cout << "Middle character(s) of the string: " << middle(input) << endl;
  cout << "Enter the amount of times you want to repeat output of the string: ";
  cin >> num;
  cout << "String repeated that many times: " << repeat(input, num) << endl;
  cout << "Number of vowels in the string: " << count_vowels(input) << endl;
}

string middle(string str) {
  int length = str.length();
  string output;
  int middle = length / 2;
  if (length % 2 == 0) {
    output += str[middle - 1];
    output += str[middle];
  } else {
    output = str[middle];
  }
  return output;
}

string repeat(string str, int n) {
  string output;
  for (int i = 0; i < n; i++) {
    output += str;
  }
  return output;
}

int count_vowels(string str) {
  int length = str.length();
  int vowels = 0;
  for (int i = 0; i < length; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
        str[i] == 'O' || str[i] == 'U') {
      vowels++;
    }
  }
  return vowels;
}
