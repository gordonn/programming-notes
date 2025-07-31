#include <iostream>
using namespace std;
// By: Gordon Li

void setZero(int[], int);
void inputArray(int[], int = 20);
void doubleArray(int[], int[], int = 20);
void copyGamma(const int[], int[][4], int = 10);
void copyAlphaBeta(const int[], const int[], int[][4], int = 10);
void printArray(int[], int);
void setInStock(int[][4], int[], int);

int main() {
  int inStock[10][4];
  int alpha[20];
  int beta[20];
  int gamma[4] = {11, 13, 15, 17};
  int delta[10] = {3, 5, 2, 6, 10, 9, 7, 11, 1, 8};

  // 1. Testing setZero function:
  const int SIZE = 30;
  int testArr[SIZE];
  setZero(testArr, SIZE);
  // Printing out the values of test array using printArray() function:
  cout << "setZero() function: " << endl;
  printArray(testArr, SIZE);

  // 2. Testing inputArray function:
  inputArray(alpha);
  // Printing out the values of the updated alpha array:
  cout << "inputArray() function: " << endl;
  printArray(alpha, 20);

  // 3. Testing doubleArray function:
  doubleArray(alpha, beta);
  // Printing out the values of the updated beta array:
  cout << "doubleArray() function: " << endl;
  printArray(beta, 20);

  // 4. Testing copyGamma function:
  copyGamma(gamma, inStock);
  // Print out the values of the updated inStock 2D array:
}

void setZero(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = 0;
  }
}

void inputArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << "Value " << i + 1 << " in the alpha array: ";
    cin >> arr[i];
  }
  cout << endl << endl;
}

void doubleArray(int input[], int output[], int size) {
  for (int i = 0; i < size; i++) {
    output[i] = input[i] * 2;
  }
  cout << endl << endl;
}

void copyGamma(const int input[], int output[][4], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < 4; j++) {
      if (i == 1) {
        output[i][j] = input[j];
      } else {
        output[i][j] = input[j] * 3;
      }
    }
  }
}

void copyAlphaBeta(const int firstInput[], const int secondInput[],
                   int output[][4], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < 4; j++) {
      if (i <= 5) {
        output[i][j] = firstInput[j];
      } else {
        output[i][j] = secondInput[j];
      }
    }
  }
}

void printArray(int arr[], int size) {
  for (int i = 1; i <= size; i++) {
    cout << arr[i - 1] << " ";
    if (i % 15 == 0) {
      cout << endl;
    }
  }
  cout << endl;
}

void setInStock(int output[][4], int delta[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < 4; j++) {
      if (i == 0) {
        cout << "Enter element " << i + 1
             << " for the first collumn of the array: ";
        cin >> output[i][j];
      } else {
        output[i][j] = output[i - 1][j] * 2 - delta[i];
      }
    }
  }
}
