// Provides character classification and conversion for chars
#include <cctype>
// Provides general utils - string/number conversion
#include <cstdlib>
// C-string manipulation functions - strlen(), strcpy(), strcat(), strcat()
#include <cstring>

#include <fstream>
#include <iostream>
using namespace std;

// Prototype for a function that passes by reference
void squareNums(int &, int &);
// Prototype using array as argument
void showValues(int[], int);
void showStatic();
// Prototype with default parameter:
void printName(string = "Gordon");

int main() {
  // Removing an element:
  // Position we want to remove at (index + 1):
  int pos = 3;
  int current_size = 5;
  // Array intialized with that current_size number of values
  int value[5] = {5, 4, 3, 2, 1};

  // Remove third element from the array (3):
  // Start at the third position
  for (int i = pos; i < current_size; i++) {
    // Pos and every value after will be swapped with the value after it
    value[i - 1] = value[i];
  }
  current_size--;

  for (int i = 0; i < current_size; i++) {
    cout << value[i] << " ";
  }
  cout << endl;
  // ------------------------

  // Inserting a element:
  // The capacity that we have to accomodate for after inserting a element is 6:
  const int CAPACITY = 6;
  // Insert a value into the second index (2 - 1):
  pos = 1;
  // Initialzie array:
  int value2[CAPACITY] = {6, 4, 3, 2, 1};

  // Starting from the last element, until we reach the position, we will
  // replace the current element with the element before it
  for (int i = CAPACITY - 1; i > pos; i--) {
    value2[i] = value2[i - 1];
  }
  value2[pos] = 5;

  for (int i = 0; i < CAPACITY; i++) {
    cout << value2[i] << " ";
  }
  cout << endl;

  //-----------------------

  // C-strings, and more about the string class review:

  // Character testing (requires cctype header file):
  char input[30];
  cout << "Enter a string: ";
  // syntax for getting input with c-string:
  cin.getline(input, 30);

  int alphaCount = 0;
  int digitCount = 0;
  int lowerCount = 0; // if (lowercase)
  int punctCount = 0; // if (punctuation)
  int upperCount = 0;
  int spaceCount = 0;

  int i = 0;
  // Use this syntax to iterate through the chracters of a string or c-string
  while (input[i] != '\0') {
    // for string objects:
    // for (size_t i = 0; i < input.length(); i++) {
    if (isalpha(input[i])) {
      alphaCount++;
    }
    if (isdigit(input[i])) {
      digitCount++;
    }
    if (islower(input[i])) {
      lowerCount++;
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

  // ------------------------
  // Character Case Coversion (requires cctype header file):

  char ch1 = 'h';
  char ch2 = 'E';
  char ch3 = 'y';

  // Have to be casted back to chars when printing out
  cout << (char)tolower(ch1) << (char)tolower(ch2) << (char)tolower(ch3)
       << endl;
  cout << (char)toupper(ch1) << (char)toupper(ch2) << (char)toupper(ch3)
       << endl;
  // Another example:
  // if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e')
  // these functions work for string objects as well

  // --------------------------
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

  // -------------------------------
  // C-String/Numeric Conversion Functions (requires <cstdlib> hearder file)

  char string1[5] = "1";
  string string2 = "3.5";
  // Convert string to number:
  int num1 = stoi(string1);
  double num2 = stod(string2);

  double sum = num1 + num2;
  cout << sum << endl;

  // ------------------------------
  // The to_string() function:
  int convert1 = 2;
  double convert2 = 3.41;

  string s1 = to_string(convert1);
  string s2 = to_string(convert2);

  cout << s1 + s2 << endl << endl;
  // string objects can use arithmetic operators to concatenate

  // -----------------------------
  // More about the C++ string Class

  // Input into a string object:
  string address;
  cout << "Enter your address: ";
  getline(cin, address);

  // String comparison (relational operators):
  string str1 = "Banana", str2 = "Apple";
  if (str1 < str2) {
    cout << str1 << " is alphabetically before " << str2 << endl;
  } else {
    cout << str2 << " is alphabetically before " << str1 << endl;
  }

  // String operators:
  // += -> appends left string to end of right
  // + -> concatenates two strings
  // [] -> reference characters in string using array notation
  // (>, >=, <, <=, ==, !=) -> Relational operators for string comparison

  // String member functions:
  // .length()
  // .substr()
  // .find()
  string s = "GordonLi";
  int lenght = s.length();
  string part = s.substr(0, 6); // Gets "Gordon"
  if (s.find("Li")) {
    cout << "Li is in the string" << endl << endl;
  }

  // ------------------------------------
  // Functions overview:

  // Using reference variable parameters:
  int a = 2, b = 3;
  squareNums(a, b);
  cout << "a^2: " << a << endl;
  cout << "b^2: " << b << endl;

  // -------------------------------------
  // Arrays as function arguments:
  const int SIZE3 = 5;
  int testArr[SIZE3] = {1, 2, 3, 4, 5};
  showValues(testArr, SIZE3);

  // ---------------------------------------
  // Static Local Variable
  // Are defined and initialized only the first time the function is executed.

  for (int i = 0; i < 5; i++) {
    showStatic();
  }

  // -----------------------------------------
  //
  // Overloaded functions have the same name but different parameter lists.
  //
  // ----------------------------------------
  // Using files for storage (requires fstream header file):
  //
  // Defining the input and output file streams:
  ifstream inputFile("input.txt");
  ofstream outputFile("output.txt");

  // test if opening failed:
  if (!inputFile) {
    cout << "File open faliure";
  }

  string line;
  // Iterating through lines of file:
  while (getline(inputFile, line)) {
    outputFile << line << endl;
  }
  inputFile.close();
  outputFile.close();

  // reading 2 collumns of data separated by space:
  /*
   *while (inputFile >> id >> score) {
   student_id[i] = id;
   student_score[i] = score;
   i++;
   total += score;
  }
   */
  // ----------------------------------------
}

// Passing by Reference:
void squareNums(int &a, int &b) {
  a *= a;
  b *= b;
}

// Arrays as function arguments
void showValues(int nums[], int size) {
  for (int i = 0; i < size; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

// Using const keyword in parameter declaration:
void showValues2(const int nums[], int size) {
  for (int i = 0; i < size; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

// Using a local static variable:
void showStatic() {
  static int statNum = 5;

  cout << "statNum is " << statNum << endl;
  statNum++;
}

void printName(string name) { cout << name; }

// Overloaded function examples:
void getDimensions(int length);            // 1
void getDimensions(int length, int width); // 2

int square(int number) { return number * number; }       // 1
double square(double number) { return number * number; } // 2
