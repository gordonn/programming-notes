#include <cctype>
#include <cstdlib>
#include <cstring>
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
  // Finding the highest & lowest values in a array
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
  // Position we want to remove at: (index + 1)
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
  // The capacity that we have to accomodate for after inserting a element is 6:
  const int CAPACITY = 6;
  // We want to insert a value into the second index (2 - 1)
  pos = 1;
  // Initialzie array:
  int value2[CAPACITY] = {6, 4, 3, 2, 1};

  // If a value hasn't already been inserted into our array, then:
  // For array index at current_size - 1, while is greater than the position
  // we want to insert into, i--
  for (int i = CAPACITY - 1; i > pos; i--) {
    // Replace the current value with the value before it
    value2[i] = value2[i - 1];
  }
  // Replace the position value we want to insert into with our new value
  value2[pos] = 5;

  for (int i = 0; i < CAPACITY; i++) {
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
  // The to_string() function:
  // Example to_string(int value) or to_string(double value) (any numerical data
  // type works)

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
  //
  // Using Reference Variables as Parameters:
  // Allows us to modify variable directly (no need for return statements):

  int a = 2, b = 3;
  squareNums(a, b);
  cout << "a^2: " << a << endl;
  cout << "b^2: " << b << endl;

  // -----------------------
  // Arrays as function arguments:
  // To pass an array to a function, just use the array name
  // When passing an array to a function, it is common to pass array size arg

  const int SIZE3 = 5;
  int testArr[SIZE3] = {1, 2, 3, 4, 5};

  showValues(testArr, SIZE3);

  // Array names in functions are like reference variables - changes made to
  // array in a function are reflected in acutal array in calling function
  // We can prevent a function form making changes to an array argument by using
  // the const key word in the parameter declaration.

  // --------------------------
  // Static Local Variables
  //
  // Local variables only exist while the function is executing. When the
  // function terminates, the contents of local variables are lost. static local
  // variables retain their contents between function calls, static local
  // variables are defined and initialized only the first time the function is
  // executed. 0 is the default intialization value

  for (int i = 0; i < 5; i++) {
    showStatic();
  }

  // ---------------------------
  // Default Arguments
  // A Default argument is an argument that is passed automatically to a
  // parameter if the argument is missing on the function call. Must be a
  // constant declared in prototype: void evenOrOdd(int = 0); Can be declared in
  // header if no prototype Multi-parameter functions may have defualt arguments
  // for some or all of them: int getSum(int, int=0, int=0);
  //
  // If not all parameters to a function have default values, the defaultless
  // ones are declared first in the parameter list:
  // int getSum(int, int=0, int=0); // OK
  // int getSum(int, int=0, int); // NO
  //
  // When a argument is ommitted from a function call, all arguments after it
  // must also be omitted: sum = getSum(num1, num2); // OK sum = getSum(num1, ,
  // num3); // NO
  //
  // -----------------------------------------
  //
  // Overloaded functions have the same name but different parameter lists
  //
  // ----------------------------------------
  //
  // exit() function (requires cstdlib header file)
  //
  // Terminates the execution of a program
  // Can pass an int value to operating system to indicate status of program
  // termination Usually used for abnormal termination of program Requires
  // cstdlib header file Example: exit(0); The cstdlib header defines two
  // constants that are commonly passed, to indicate success of faliure:
  // exit(EXIT_SUCCESS);
  // exit(EXIT_FAILURE);
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
  // Its value is displayed and then incremented just before the function
  // returns
}

void printName(string name) { cout << name; }

// Overloaded function examples:
void getDimensions(int length);            // 1
void getDimensions(int length, int width); // 2

int square(int number) { return number * number; }
double square(double number) { return number * number; }
