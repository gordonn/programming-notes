#include <iostream>
using namespace std;
// By: Gordon Li

int count_words(string str);
string makeUpper(string str);

int main() {
  string str;
  cout << "Enter a sentence:" << endl;
  getline(cin, str);
  cout << endl;
  cout << "Number of words in the sentence: " << count_words(str) << endl;
  cout << endl;
  cout << "Sentence with the first letter of each word capitalized: " << endl;
  cout << makeUpper(str) << endl;
}

int count_words(string str) {
  int words = 0;
  int length = str.length();
  for (int i = 0; i < length; i++) {
    // When the current letter is either a space or EOL character, words++
    if (str[i] == ' ' || str[i + 1] == '\0') {
      words++;
    }
  }
  return words;
}

string makeUpper(string str) {
  // Check if it is the first word
  if (str[0] >= 97 && str[0] <= 122) {
    str[0] -= 32;
  }

  bool upperCase;
  bool a;
  int length = str.length();
  for (int i = 1; i < length; i++) {
    upperCase = false;
    a = false;
    // Check if current char is uppercase
    if (str[i] >= 65 && str[i] <= 90) {
      upperCase = true;
    }

    // Check if the word is 'a'
    if (str[i] == 'a' && str[i - 1] == ' ' && str[i + 1] == ' ') {
      a = true;
    }

    // Make sure there is a space before the current letter
    // Make sure the word is not 'a'
    // Make sure current char is not already uppercase
    if (str[i - 1] == ' ' && !a && !upperCase) {
      str[i] -= 32;
    }
  }
  return str;
}
