#include <iostream>
using namespace std;

void countElements(int* arr, int size, int* negativeCount, int* positiveCount, int* zeroCount) {
    *negativeCount = 0;
    *positiveCount = 0;
    *zeroCount = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            (*negativeCount)++;
        } else if (arr[i] > 0) {
            (*positiveCount)++;
        } else {
            (*zeroCount)++;
        }
    }
}

int main() {
    int arr[] = {-1, 2, 0, -3, 5, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int negativeCount, positiveCount, zeroCount;

    countElements(arr, size, &negativeCount, &positiveCount, &zeroCount);

    cout << "Negative count: " << negativeCount << endl;
    cout << "Positive count: " << positiveCount << endl;
    cout << "Zero count: " << zeroCount << endl;

    return 0;
}
