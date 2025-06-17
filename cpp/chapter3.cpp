#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // Type Casting:
  double number = 3.7;
  int val;
  val = static_cast<int>(number);
  cout << val << endl << endl;

  // Multiple assignment:
  int a, b, c, d;
  a = b = c = d = 12;

  // Combined assignment:
  int num;
  num += 1; // num = num + 1;
  num %= 3; // num = num % 3;

  // Formatting output:
  // 1. setw() (sets the width of the output field)

  // Without setw()
  int num1 = 1, num2 = 2, num3 = 3, num4 = 69, num5 = 420, num6 = 41;
  cout << num1 << " " << num2 << " " << num3 << endl;
  cout << num4 << " " << num5 << " " << num6 << endl;

  // With setw()
  cout << setw(4) << num1 << setw(4) << num2 << setw(4) << num3 << endl;
  cout << setw(4) << num4 << setw(4) << num5 << setw(4) << num6 << endl << endl;

  // 2. Formatting numbers with setprecision()
  double quotient, numerator = 132.364, denominator = 26.91;

  quotient = numerator / denominator;
  cout << quotient << endl;
  cout << setprecision(3) << quotient << endl;
  cout << setprecision(4) << quotient << endl;
  cout << setprecision(5) << quotient << endl << endl;

  // 3. Formatting numbers with fixed
  double sales = 1234.56;
  cout << "Without fixed: " << setprecision(2) << sales << endl;
  cout << "With fixed: " << fixed << setprecision(2) << sales << endl << endl;

  // 4. Showpoint manipulator:
  double x = 123.4;

  cout << showpoint << setprecision(6) << "Showpoint: " << x << endl;
  cout << showpoint << setprecision(3);
  cout << "Showpoint 2: " << x << endl;

  // 5. Left & Right Manipulator
  // By default, output is alligned to the right:
  double z = 146.789;
  cout << "Default is alligned right: " << setw(10) << z << endl;
  cout << "Left alligned: " << left << setw(10) << z << endl << endl;
  // Left manipulator remains in effect until we explicitly declare the right

  // To include spaces from a users input
  string name;
  string city;

  cout << "Please enter your name: ";
  getline(cin, name);
  cout << "Enter the city you live in: ";
  getline(cin, city);

  cout << "Hello, " << name << endl;
  cout << "You live in " << city << endl << endl;

  // Inputting a Character:
  // cin.get()
  /* The get member function reads a single character, including any whitespace
   * character If the program needs to store the character being read, the get
   * member function can be called in either of the following ways. In both
   * examples, assume ch is the name of a char variable into which the character
   * is being read:
   * cin.get(ch);
   * ch = cin.get(); */

  /*If the progam is using the cin.get function to simply top pause the screen
   * until the [Enter] key is pressed and does not need to store the character,
   * the function can also be called like this:
   * cin.get();*/

  // Mixing cin >> and cin.get():

  return 0;
}
