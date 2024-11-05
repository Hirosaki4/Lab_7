#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size1, size2;

    // Введення розмірів масивів
    cout << "Введіть розмір першого масиву: ";
    cin >> size1;
    cout << "Введіть розмір другого масиву: ";
    cin >> size2;

    // Динамічне створення масивів
    int* array1 = new int[size1];
    int* array2 = new int[size2];

    // Заповнення першого масиву
    cout << "Введіть елементи першого масиву:\n";
    for (int i = 0; i < size1; i++) {
        cin >> array1[i];
    }

    // Заповнення другого масиву
    cout << "Введіть елементи другого масиву:\n";
    for (int i = 0; i < size2; i++) {
        cin >> array2[i];
    }

    // Створення об'єднаного масиву
    int* combinedArray = new int[size1 + size2];

    // Копіювання елементів першого масиву
    for (int i = 0; i < size1; i++) {
        combinedArray[i] = array1[i];
    }

    // Копіювання елементів другого масиву
    for (int i = 0; i < size2; i++) {
        combinedArray[size1 + i] = array2[i];
    }

    // Виведення об'єднаного масиву
    cout << "Об'єднаний масив:\n";
    for (int i = 0; i < size1 + size2; i++) {
        cout << combinedArray[i] << " ";
    }
    cout << endl;

    // Звільнення пам'яті
    delete[] array1;
    delete[] array2;
    delete[] combinedArray;

    return 0;
}
