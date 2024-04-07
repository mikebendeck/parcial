#include <iostream>

int*** create3DArray(int* dimensiones) {
    int length = sizeof(dimensiones) / sizeof(dimensiones[0]);
    int*** array3D = new int**[length];

    for (int i = 0; i <= length; i++) {
        array3D[i] = crearMatrix(dimensiones[i]);
    }

    return array3D;
}

