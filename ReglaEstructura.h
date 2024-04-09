#include <iostream>


//Aqui voy poner los diferentes valores de los elementos de una estructura en cierta posicion

int*** listaDeValores(int*** estr, int profundidadEstr, int* dimensiones, int posx, int posy) {

    int*** num = new int**[profundidadEstr];
    
    for (int k = 0; k < profundidadEstr; k++) {

        int** matrix = estr[k];
        int numRows = dimensiones[k]; 

        num[k] = new int*[4];
        num[k][0] = new int[2];
        num[k][0][0] = matrix[posx][posy]; 
        num[k][0][1] = 0;

        for (int m = 1; m < 4; m++) {

            matrix = rotarMatriz(matrix, dimensiones[k]);
            num[k][m] = new int[2];
            num[k][m][0] = matrix[posx][posy]; 
            num[k][m][1] = m;
        }
    }

    return num;
}

bool verificarLlave(int*** numAr, int* dimensiones, int lenDimensiones) {



    return false; 
}

