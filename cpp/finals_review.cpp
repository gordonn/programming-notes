#include <cctype>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // Finding the highest value in a array
  const int SIZE = 5;
  int numbers[SIZE] = {5, 4, 3, 2, 1};
  int highest = numbers[0];
  int lowest = numbers[0];
  for (int i = 1; i < SIZE; i++) {
    if (numbers[i] > highest) {
      highest = numbers[i];
    }
    if (numbers[i] < lowest) {
      lowest = numbers[i];
    }
  }

  cout << highest << endl;
  cout << lowest << endl;

  // ---------------------
  // Removing an element:
  // Position we want to remove at (index + 1):
  int pos = 3;
  // The current size of the array
  int current_size = 5;
  // Array intialized with that current_size number of values
  int value[5] = {5, 4, 3, 2, 1};

  // Will remove the 3 from the array
  // Start at the third position
  for (int i = pos; i < current_size; i++) {
    // Pos and every value after will be swapped with the value after it
    value[i - 1] = value[i];
  }
  current_size--;

  // Output the contents of the updated array only up to the current size
  for (int i = 0; i < current_size; i++) {
    cout << value[i] << " ";
  }
  cout << endl;
  // --------------------

  // Inserting a element:
  // Initial size of the array is 5:
  current_size = 5;
  // The capacity that we have to accomodate for after inserting a element is 6:
  const int CAPACITY = 6;
  // We want to insert a value into the second index (2 - 1)
  pos = 1;
  // Initialzie array with our updated capacity after inserting a element:
  int value2[CAPACITY] = {6, 4, 3, 2, 1};

  // If a value hasn't already been inserted into our array, then
  if (current_size < CAPACITY) {
    // Increase the current size by 1 before inserting:
    current_size++;
    // For array index at current_size - 1, while is greater than the position
    // we want to insert into, i--
    for (int i = current_size - 1; i > pos; i--) {
      // Replace the current value with the value before it
      value2[i] = value2[i - 1];
    }
    // Replace the position value we want to insert into with our new value
    value2[pos] = 5;
  }

  for (int i = 0; i < current_size; i++) {
    cout << value2[i] << " ";
  }
  cout << endl;

  //-----------------

  // Swapping Elements:
  // Utilize a temporary variable
  int value3[5] = {1, 2, 3, 4, 5};

  int temp = value3[0];
  value3[0] = value3[1];
  value3[1] = temp;
  for (int i = 0; i < 5; i++) {
    cout << value3[i] << " ";
  }
  cout << endl;
  //-----------------

  // C-strings, and more about the string class review:

  // Character testing (requires cctype header file):
  string input;
  cout << "Enter a string: ";
  getline(cin, input);

  int alphaCount = 0;
  int alnumCount = 0; // if is a letter or digit
  int digitCount = 0;
  int lowerCount = 0; // is lowercase letter
  int printCount = 0; // is a printable character
  int punctCount = 0; // is a punctuation character
  int upperCount = 0;
  int spaceCount = 0;

  int i = 0;
  while (input[i] != '\0') {
    if (isalpha(input[i])) {
      alphaCount++;
    }
    if (isalnum(input[i])) {
      alnumCount++;
    }
    if (isdigit(input[i])) {
      digitCount++;
    }
    if (islower(input[i])) {
      lowerCount++;
    }
    if (isprint(input[i])) {
      printCount++;
    }
    if (ispunct(input[i])) {
      punctCount++;
    }
    if (isupper(input[i])) {
      upperCount++;
    }
    if (isspace(input[i])) {
      spaceCount++;
    }
    i++;
  }

  cout << "Alpha Count: " << alphaCount << endl;
  cout << "Alnum Count: " << alnumCount << endl;
  cout << "Digit Count: " << digitCount << endl;
  cout << "Lower Count: " << lowerCount << endl;
  cout << "Print Count: " << printCount << endl;
  cout << "Punct Count: " << punctCount << endl;
  cout << "Upper Count: " << upperCount << endl;
  cout << "Space Count: " << spaceCount << endl;

  // --------------------
  // Character Case Coversion (requires cctype header file):

  char ch1 = 'h';
  char ch2 = 'E';
  char ch3 = 'y';

  cout << (char)tolower(ch1) << (char)tolower(ch2) << (char)tolower(ch3)
       << endl;
  cout << (char)toupper(ch1) << (char)toupper(ch2) << (char)toupper(ch3)
       << endl;

  // -----------------------
  // C-strings (arrays of type char)
  // Are used in many C library functions

  // Strlen(str) returns lenght of C-string (requires cstring header file):
  const int SIZE2 = 30;
  char city[SIZE2] = "Vancouver";
  cout << "Length of Vancouver " << strlen(city) << endl;

  // Strcat (str1, str2): appends str2 to the end of str1:
  char location[SIZE2] = "Vancouver, ";
  char province[3] = "BC";
  cout << strcat(location, province) << endl;

  // Strcpy (str1, str2) : copies str2 to str1

  char fname[SIZE2] = "Copied word", name[SIZE2];
  strcpy(name, fname);
  cout << fname << endl;

  // C-string Inside a C-string (strstr)
  // strstr(str1, str2) : finds the first occurrence of str2 in str1. Returns a
  // pointer to match, or NULL if no match.

  char river[SIZE2] = "Wabash";
  char word[SIZE2] = "aba";
  if (strstr(river, word) == NULL) {
    cout << "No substring" << endl;
  } else {
    cout << "There is substring" << endl;
  }

  // Strcmp (compare if two strings are equal):
  char word1[SIZE2] = "Hello";
  char word2[SIZE2] = "Hello";

  if (strcmp(word1, word2) == 0) {
    cout << "Words match" << endl;
  } else {
    cout << "Words dont math" << endl;
  }

  // C-String/Numeric Conversion Functions (requires <cstdlib> hearder file)

  // converts C-string to an int value, returns the value
  int iNum = atoi("1234");
  // converts C-string to an long value, returns the value
  long lNum = atol("5678");
  // converts C-string to a double value, returns the value
  double dNum = atof("35.7");
  char intChar[10];

  double total = iNum + lNum + dNum;
  cout << total << endl;

  // String to Number conversion

  // stoi (string str) ->
  // Accepts a string argument and returns that value converted to int
  int num1 = stoi("1");

  // stol (string str) ->
  // Accepts a string argument and returns that argument's value converted to a
  // long
  long num2 = stol("2");

  // stoul (string str) -> Unsigned long
  // stoll (string str) -> Long long
  // stoull -> Unsigned long long
  // stof -> Float
  // stod -> Double
  double num3 = stod("3.5");
  // stold -> Long Double

  double total2 = num1 + num2 + num3;
  cout << total2 << endl;

  // ---------------------
  // The to_string function
  // Example to_string(int value) or to_string(double value) (any numerical data
  // type works)
  // -> Will accept argument of any numerical data type and convert it to a
  // string object

  // --------------------
  // More about the C++ string Class

  // Input into a string object:
  string address;
  cout << "Enter your address: ";
  getline(cin, address); // or (cin >> address) for a single word

  // string Comparison:
  // We can use relational operators to directly compare string objects
  string str1 = "Banana", str2 = "Apple";
  if (str1 < str2) {
    cout << str1 << " is alphabetically before " << str2 << endl;
  } else {
    cout << str2 << " is alphabetically before " << str1 << endl;
  }

  // String operators:
  // += -> appends string on right to end of contents on left
  // + -> concatenates two strings
  // [] -> reference characters in string using array notation
  // (>, >=, <, <=, ==, !=) -> Relational operators for string comparison

  // String member functions: .length() & .substr()

  // ------------------------
  // Functions overview:
}
