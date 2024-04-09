#include <iostream>

int*** create3DArray(int* dimensiones, int len) {

    int*** array3D = new int**[len];

    for (int i = 0; i <= len; i++) {
        array3D[i] = crearMatrix(dimensiones[i]);
    }

    return array3D;
}

