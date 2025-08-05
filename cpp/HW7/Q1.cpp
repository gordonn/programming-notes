#include <iomanip>
#include <iostream>
using namespace std;
// By: Gordon Li

void setZero(int[], const int);
void inputArray(int[], const int = 20);
void doubleArray(const int[], int[], const int = 20);
void copyGamma(const int[], int[][4], const int = 10);
void copyAlphaBeta(const int[], const int[], int[][4], const int = 10);
void printArray(const int[], const int);
void setInStock(int[][4], const int[], const int = 10);
void print2DArray(const int[][4], const int = 10);

int main() {
  int inStock[10][4];
  int alpha[20];
  int beta[20];
  int gamma[4] = {11, 13, 15, 17};
  int delta[10] = {3, 5, 2, 6, 10, 9, 7, 11, 1, 8};

  cout << "setZero() function:" << endl;
  const int SIZE = 30;
  int testArr[SIZE];
  setZero(testArr, SIZE);
  cout << "Printing out the result of setZero() function using the "
          "printArray() function:"
       << endl;
  printArray(testArr, SIZE);
  cout << endl;

  cout << "inputArray() function:" << endl;
  inputArray(alpha);
  cout << endl;
  cout << "Printing out the values of the updated alpha array: " << endl;
  printArray(alpha, 20);
  cout << endl << endl;

  cout << "doubleArray() function:" << endl;
  doubleArray(alpha, beta);
  cout << "Printing out the values of the updated beta array:" << endl;
  printArray(beta, 20);
  cout << endl << endl;

  cout << "copyGamma() function:" << endl;
  copyGamma(gamma, inStock);
  cout << "Printing out the values of the updated inStock 2D array:" << endl;
  print2DArray(inStock);
  cout << endl;

  cout << "copyAlphaBeta() function:" << endl;
  copyAlphaBeta(alpha, beta, inStock);
  cout << "Printing out the values of the updated inStock 2D array:" << endl;
  print2DArray(inStock);
  cout << endl;

  cout << "setInStock() function:" << endl;
  setInStock(inStock, delta);
  cout << endl;
  cout << "Printing out the values of the updated inStock 2D array:" << endl;
  print2DArray(inStock);
  cout << endl;
}

void setZero(int arr[], const int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = 0;
  }
}

void inputArray(int arr[], const int size) {
  for (int i = 0; i < size; i++) {
    cout << "Value " << i + 1 << " in the alpha array: ";
    cin >> arr[i];
  }
}

void doubleArray(const int input[], int output[], const int size) {
  for (int i = 0; i < size; i++) {
    output[i] = input[i] * 2;
  }
}

void copyGamma(const int input[], int output[][4], const int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < 4; j++) {
      if (i == 0) {
        output[i][j] = input[j];
      } else {
        output[i][j] = output[i - 1][j] * 3;
      }
    }
  }
}

void copyAlphaBeta(const int firstInput[], const int secondInput[],
                   int output[][4], const int size) {
  int index = 0;
  int index2 = 0;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < 4; j++) {
      if (i < 5) {
        output[i][j] = firstInput[index];
        index++;
      } else {
        output[i][j] = secondInput[index2];
        index2++;
      }
    }
  }
}

void printArray(const int arr[], const int size) {
  for (int i = 1; i <= size; i++) {
    cout << arr[i - 1] << " ";
    if (i % 15 == 0) {
      cout << endl;
    }
  }
}

void setInStock(int output[][4], const int delta[], const int size) {
  for (int i = 0; i < size; i++) {
    cout << "Enter element " << i + 1
         << " for the first collumn of the array: ";
    cin >> output[i][0];
  }
  for (int i = 1; i < 4; i++) {
    for (int j = 0; j < size; j++) {
      output[j][i] = output[j][i - 1] * 2 - delta[j];
    }
  }
}

void print2DArray(const int arr[][4], const int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < 4; j++) {
      cout << setw(8) << arr[i][j];
    }
    cout << endl;
  }
}
