#include <cstring>
#include <iostream>
using namespace std;

int main() {
  const int SIZE = 30;
  char password[SIZE];

  cout << "Enter your password: ";
  cin.getline(password, SIZE);

  bool length = false;
  bool lower = false;
  bool upper = false;
  bool digit = false;

  if (strlen(password) >= 6) {
    length = true;
  } else {
    cout << "Your password should be at least six characters long." << endl;
  }

  int i = 0;
  while (password[i] != '\0') {
    if (islower(password[i])) {
      lower = true;
    }
    if (isupper(password[i])) {
      upper = true;
    }
    if (isdigit(password[i])) {
      digit = true;
    }
    i++;
  }

  if (!lower || !upper) {
    cout << "Your password should contain at least one uppercase and at least "
            "one lowercase letter."
         << endl;
  }

  if (!digit) {
    cout << "Your password should contain at least one digit." << endl;
  }

  if (length && lower && upper && digit) {
    cout << "Your password meets all the requirements." << endl;
  }
}
