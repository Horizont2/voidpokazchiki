#include <iostream>
using namespace std;

int* insertIntoArray(int* arr, int& size, int* block, int blockSize, int index) {
    int* newArr = new int[size + blockSize];
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    for (int i = 0; i < blockSize; ++i) {
        newArr[index + i] = block[i];
    }
    for (int i = index; i < size; ++i) {
        newArr[blockSize + i] = arr[i];
    }
    size += blockSize;
    delete[] arr;
    return newArr;
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int block[] = {4, 5, 6};
    int blockSize = sizeof(block) / sizeof(block[0]);
    int index = 1;

    int* newArr = insertIntoArray(arr, size, block, blockSize, index);

    cout << "New array: ";
    for (int i = 0; i < size; ++i) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    delete[] newArr;
    return 0;
}
