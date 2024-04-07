#include <iostream>

void SeleccionOrdenamiento(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int minPos = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minPos]) {
                minPos = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minPos];
        arr[minPos] = temp;
    }
}
int main() {

    int arr[] = {5, 3, 8, 2, 1, 7, 4, 6}; // Array desordenado
    int size = sizeof(arr) / sizeof(arr[0]); // Tamaño del array

    std::cout << "Antes de ordenar:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    SeleccionOrdenamiento(arr, size); // Ordenar el array

    std::cout << "Después de ordenar:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}