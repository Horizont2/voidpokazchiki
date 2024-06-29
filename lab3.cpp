#include <iostream>
using namespace std;

int* isSubset(int* A, int sizeA, int* B, int sizeB) {
    for (int i = 0; i <= sizeA - sizeB; ++i) {
        bool found = true;
        for (int j = 0; j < sizeB; ++j) {
            if (A[i + j] != B[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return &A[i];
        }
    }
    return nullptr;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {3, 4};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    int* result = isSubset(A, sizeA, B, sizeB);

    if (result) {
        cout << "Subset found starting at index: " << result - A << endl;
    } else {
        cout << "Subset not found." << endl;
    }

    return 0;
}
