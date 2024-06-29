#include <iostream>
using namespace std;

// Функція розподілу динамічної пам'яті
int* allocateArray(int size) {
    return new int[size];
}

// Функція ініціалізації динамічного масиву
void initializeArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }
}

// Функція друку динамічного масиву
void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Функція видалення динамічного масиву
void deleteArray(int* arr) {
    delete[] arr;
}

// Функція додавання елемента в кінець масиву
int* addElementToEnd(int* arr, int& size, int element) {
    int* newArr = new int[size + 1];
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
    newArr[size] = element;
    size++;
    delete[] arr;
    return newArr;
}

// Функція вставки елемента за вказаним індексом
int* insertElement(int* arr, int& size, int element, int index) {
    int* newArr = new int[size + 1];
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    newArr[index] = element;
    for (int i = index; i < size; ++i) {
        newArr[i + 1] = arr[i];
    }
    size++;
    delete[] arr;
    return newArr;
}

// Функція видалення елемента за вказаним індексом
int* deleteElement(int* arr, int& size, int index) {
    int* newArr = new int[size - 1];
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    for (int i = index + 1; i < size; ++i) {
        newArr[i - 1] = arr[i];
    }
    size--;
    delete[] arr;
    return newArr;
}

int main() {
    int size = 5;
    int* arr = allocateArray(size);
    
    initializeArray(arr, size);
    printArray(arr, size);

    arr = addElementToEnd(arr, size, 6);
    printArray(arr, size);

    arr = insertElement(arr, size, 10, 2);
    printArray(arr, size);

    arr = deleteElement(arr, size, 3);
    printArray(arr, size);

    deleteArray(arr);
    return 0;
}
