#include <iostream>
using namespace std;

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

    int size;

    cout << "Ingrese el tamaño del array" << endl;
    cin >> size;

    while( size <= 0){

        cout << "Ingreso un numero negativo o igual a cero" << endl;
        cout << "Ingrese el tamaño del array" << endl;
        cin >> size;

    }

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Ingrese el numero en posicion " << i << endl;
        cin >> arr[i];
    }

    SeleccionOrdenamiento(arr, size);

    cout << "Después de ordenar:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}