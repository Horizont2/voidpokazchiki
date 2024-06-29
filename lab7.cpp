#include <iostream>
using namespace std;

int* removeFromArray(int* arr, int& size, int index, int blockSize) {
    int newSize = size - blockSize;
    int* newArr = new int[newSize];
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    for (int i = index; i < newSize; ++i) {
        newArr[i] = arr[i + blockSize];
    }
    size = newSize;
    delete[] arr;
    return newArr;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 2;
    int blockSize = 2;

    int* newArr = removeFromArray(arr, size, index, blockSize);

    cout << "New array: ";
    for (int i = 0; i < size; ++i) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    delete[] newArr;
    return 0;
}
