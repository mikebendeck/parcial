#include <iostream>
using namespace std;
 
int rotarMatriz(int**, int**, int);
int imprimirMatrix(int**, int);
int copiaMatriz(int**, int**, int);

int** crearMatrix(int numDim)
{
    int **ptr;
    ptr = new int*[numDim];
    
    for (int i = 0; i < numDim; i++) {
        ptr[i] = new int[numDim];
    }
    
    int contador = 0;
    for (int fila = 0; fila < numDim; fila++) {
        for (int col = 0; col < numDim; col++) {
            if (fila != numDim / 2 || col != numDim / 2) {
                ptr[fila][col] = ++contador;
            } else {
                ptr[fila][col] = 0;
            }
        }
    }
    
    return ptr;

}


int** rotarMatriz(int **matrizOriginal, int orden) {
    int** matrizRotada = new int*[orden];
    for (int i = 0; i < orden; i++) {
        matrizRotada[i] = new int[orden];
    }

    for (int fila = 0; fila < orden; fila++) {
        for (int col = 0; col < orden; col++) {
            matrizRotada[orden - 1 - col][fila] = matrizOriginal[fila][col];
        }
    }

    return matrizRotada;
}

int imprimirMatrix(int **matriz1, int orden){
    for (int fila=0; fila<orden; fila++){
        for (int col=0; col<orden; col++){
            if (matriz1[fila][col]<10) cout << " ";
            if (matriz1[fila][col]<100) cout << " ";            
            if (matriz1[fila][col]) cout << matriz1[fila][col] << " ";
            else cout << "* ";
        }
        cout << "   ";
        cout << "\n";
        
    }
    return 0;
}

int copiaMatriz(int **matrizOrigen, int **matrizDestino, int orden){
    for (int fila=0;fila<orden;fila++){
        for (int col=0;col<orden;col++){
            matrizDestino[fila][col]=matrizOrigen[fila][col];
            //matrizDestino[fila][col]=8;
        }
    }
    //imprimirmatrices(matrizDestino,matrizDestino,orden);
    return 0;
}


