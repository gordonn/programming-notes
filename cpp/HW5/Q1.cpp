#include <cstring>
#include <iostream>

using namespace std;

int main() {
  const int SIZE = 20;
  char str[SIZE];
  cout << "Enter a string: ";
  cin.getline(str, SIZE);
  cout << endl;

  cout << "A) Count the number of vowels in the string" << endl;
  cout << "B) Count the number of consonants in the string" << endl;
  cout << "C) Count both the vowels and consonants in the string" << endl;
  cout << "D) Enter another string" << endl;
  cout << "E) Exit the program" << endl << endl;

  bool exit = false;

  while (!exit) {
    char choice[SIZE];
    cout << "Enter your choice: ";
    cin.getline(choice, SIZE);

    // A) Count the number of vowels
    int i = 0;
    int vowels = 0;
    while (str[i] != '\0') {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
          str[i] == 'u') {
        vowels++;
      }
      i++;
    }

    // B) Count the number of consonants
    int consonants = strlen(str) - vowels;

    // C) Count both the vowels and consonants in the string
    int both = consonants + vowels;

    int choiceNum;
    if (strcmp(choice, "A)") == 0 || strcmp(choice, "A") == 0 ||
        strcmp(choice, "a") == 0) {
      choiceNum = 1;
    } else if (strcmp(choice, "B)") == 0 || strcmp(choice, "B") == 0 ||
               strcmp(choice, "b") == 0) {
      choiceNum = 2;
    } else if (strcmp(choice, "C)") == 0 || strcmp(choice, "C") == 0 ||
               strcmp(choice, "c") == 0) {
      choiceNum = 3;
    } else if (strcmp(choice, "D)") == 0 || strcmp(choice, "D") == 0 ||
               strcmp(choice, "d") == 0) {
      choiceNum = 4;
    } else if (strcmp(choice, "E)") == 0 || strcmp(choice, "E") == 0 ||
               strcmp(choice, "e") == 0) {
      choiceNum = 5;
    }

    switch (choiceNum) {
    case 1:
      cout << "Number of vowels in the string: " << vowels << endl << endl;
      break;
    case 2:
      cout << "Number of consonants in the string: " << consonants << endl
           << endl;
      break;
    case 3:
      cout << "Number of vowels and consonants: " << both << endl << endl;
      break;
    case 4:
      cout << "Enter another string: ";
      cin.getline(str, SIZE);
      cout << endl;
      break;
    case 5:
      exit = true;
      break;
    default:
      cout << "Enter a valid choice" << endl << endl;
    }
  }
}
