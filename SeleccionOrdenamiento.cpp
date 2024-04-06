#include <iostream>
#include <vector>

void SeleccionOrdenamiento(std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        int minPos = i;

        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minPos]) {
                minPos = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minPos];
        arr[minPos] = temp;
    }
}

