#include <iostream>
using namespace std;

void calculateSumAndProduct(int* arr, int size, int* sum, int* product) {
    *sum = 0;
    *product = 1;
    for (int i = 0; i < size; ++i) {
        *sum += arr[i];
        *product *= arr[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum, product;

    calculateSumAndProduct(arr, size, &sum, &product);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}
