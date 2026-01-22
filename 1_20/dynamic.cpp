/**
 * @file dynamic.cpp
 * @author Kathleen Ericson
 * @date 2026-01-20
 * @brief practice with dynamic arrays
 * 
 * making, filling, resizing dynamic arrays
 */


#include <iostream>

using namespace std;


/**
 * will print the provided array
 *
 * @param int *arr pointer to array
 * @param int size size of the array
 * @pre arr has been initialized and is size size
 * @return void 
 * @post no changes to arr
 * 
 */
void printArr(int *arr, int size);


/**
 * doubles the capacity of our array
 *
 * @param int *arr array to double in size - contents will be preserved
 * @param int size original size of array
 * @pre *arr has been initialized
 * @return int the size of the new array
 * @post *arr has been overwritten with the larger array (same content)
 * 
 */
int resize(int *&arr, int size); 

int main() {
  int *dArr = nullptr; //NULL
  int size = 0;

  cout << "How big? ";
  cin >> size;

  dArr = new int[size];

  for (int i = 0; i < size; i++) {
    dArr[i] = i;
  }

  printArr(dArr, size);

  size = resize(dArr, size);

  printArr(dArr, size);

  delete[] dArr;
  return 0;
}


void printArr(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << "arr[" << i << "]: " << arr[i] << endl;
  }
}

int resize(int*& arr, int size) {
  int* newArr = new int[2 * size];

  for (int i = 0; i < size; i++) {
    newArr[i] = arr[i];
  }

  delete[] arr;

  arr = newArr;

  return size * 2;
}
