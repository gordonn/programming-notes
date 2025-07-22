#include <cstring>
#include <iostream>
using namespace std;
// By: Gordon Li

int main() {
  const int SIZE = 30;
  char str[SIZE];
  // 1. The user is asked to enter a string:
  cout << "Enter a string: ";
  cin.getline(str, SIZE);
  cout << endl;

  // 2. Menu:
  cout << "A) Count the number of vowels in the string" << endl;
  cout << "B) Count the number of consonants in the string" << endl;
  cout << "C) Count both the vowels and consonants in the string" << endl;
  cout << "D) Enter another string" << endl;
  cout << "E) Exit the program" << endl << endl;

  bool exit = false;

  // Re-prompt user for choice until they exit:
  while (!exit) {
    char choice[SIZE];
    cout << "Enter your choice (A, B, C, D, E): ";
    cin.getline(choice, SIZE);

    // A) Count the number of vowels
    int i = 0;
    int vowels = 0;
    while (str[i] != '\0') {
      if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' ||
          tolower(str[i]) == 'i' || tolower(str[i]) == 'o' ||
          tolower(str[i]) == 'u') {
        vowels++;
      }
      i++;
    }

    // B) Count the number of consonants
    int j = 0;
    int consonants = 0;
    while (str[j] != '\0') {
      if (tolower(str[j]) != 'a' && tolower(str[j]) != 'e' &&
          tolower(str[j]) != 'i' && tolower(str[j]) != 'o' &&
          tolower(str[j]) != 'u' && isalpha(str[j])) {
        consonants++;
      }
      j++;
    }

    // C) Count both the vowels and consonants in the string
    int both = consonants + vowels;

    // Assign choice letter to a number
    int choiceNum = 0;
    if (strcmp(choice, "A)") == 0 || strcmp(choice, "A") == 0 ||
        strcmp(choice, "a") == 0 || strcmp(choice, "a)") == 0) {
      choiceNum = 1;
    } else if (strcmp(choice, "B)") == 0 || strcmp(choice, "B") == 0 ||
               strcmp(choice, "b") == 0 || strcmp(choice, "b)") == 0) {
      choiceNum = 2;
    } else if (strcmp(choice, "C)") == 0 || strcmp(choice, "C") == 0 ||
               strcmp(choice, "c") == 0 || strcmp(choice, "c)") == 0) {
      choiceNum = 3;
    } else if (strcmp(choice, "D)") == 0 || strcmp(choice, "D") == 0 ||
               strcmp(choice, "d") == 0 || strcmp(choice, "d)") == 0) {
      choiceNum = 4;
    } else if (strcmp(choice, "E)") == 0 || strcmp(choice, "E") == 0 ||
               strcmp(choice, "e") == 0 || strcmp(choice, "e)") == 0) {
      choiceNum = 5;
    }

    // Execute menu options:
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
      // D) Enter another string:
      cout << "Enter another string: ";
      cin.getline(str, SIZE);
      cout << endl;
      break;
    case 5:
      // E) Exit the program
      cout << "Exiting Program" << endl;
      exit = true;
      break;
    default:
      cout << "Enter a valid choice" << endl << endl;
    }
  }
}
