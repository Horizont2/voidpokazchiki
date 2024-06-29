#include <iostream>
using namespace std;

int* removeNegativeNumbers(int* arr, int size, int& newSize) {
    newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            newSize++;
        }
    }

    int* newArr = new int[newSize];
    int j = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            newArr[j++] = arr[i];
        }
    }

    return newArr;
}

int main() {
    int arr[] = {-1, 2, -3, 4, -5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newSize;

    int* newArr = removeNegativeNumbers(arr, size, newSize);

    cout << "New array: ";
    for (int i = 0; i < newSize; ++i) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    delete[] newArr;
    return 0;
}
