#include <iostream>
using namespace std;

int* addToArrayEnd(int* arr, int& size, int* block, int blockSize) {
    int* newArr = new int[size + blockSize];
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
    for (int i = 0; i < blockSize; ++i) {
        newArr[size + i] = block[i];
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

    int* newArr = addToArrayEnd(arr, size, block, blockSize);

    cout << "New array: ";
    for (int i = 0; i < size; ++i) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    delete[] newArr;
    return 0;
}
