#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int* removePrimes(int* arr, int size, int& newSize) {
    newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (!isPrime(arr[i])) {
            newSize++;
        }
    }

    int* newArr = new int[newSize];
    int j = 0;
    for (int i = 0; i < size; ++i) {
        if (!isPrime(arr[i])) {
            newArr[j++] = arr[i];
        }
    }

    return newArr;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newSize;

    int* newArr = removePrimes(arr, size, newSize);

    cout << "Array without prime numbers: ";
    for (int i = 0; i < newSize; ++i) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    delete[] newArr;
    return 0;
}
