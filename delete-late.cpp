#include <iostream>
#include <string>

using namespace std;

int main() {
  string city;
  char ch;
  cout << "what city do you live in?";

  getline(cin, city);

  cout << "you live in " << city << endl;

  cout << "enter a character.";
  ch = cin.get();
  cout << "you typed in " << ch;
}
