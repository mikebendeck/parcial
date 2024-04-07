#include <iostream>
using namespace std;
 
int rotarMatriz(int**, int**, int);
int imprimirmatrices(int**, int**, int);
int copiaMatriz(int**, int**, int);

int e( int numDim )
{

    int **ptr;
    
    ptr = new int * [numDim];
    
    for (int i=0; i<numDim; i++){
        ptr [i] = new int [numDim];
    }
    
    int contador=0;
    for (int fila=0; fila<numDim; fila++){
        for (int col=0; col<numDim; col++){
            if(fila != numDim/2   || col != numDim/2 ) ptr[fila][col] = ++contador;
            else ptr[fila][col] = 0;
        
        }
    }


    for (int i = 0; i < numDim; i++) {
    for (int j = 0; j < numDim; j++) {
        cout << ptr[i][j] << " ";
    }
    cout << endl;
}    

    return 0;
}


int rotarMatriz(int **matrizOriginal, int **matrizRotada, int orden){
    for (int fila=0; fila<orden; fila++){
        for (int col=0; col<orden; col++){
            
            matrizRotada[orden-1-col][fila]=matrizOriginal[fila][col];
        }
    }
    return 0;
}    

int imprimirmatrices(int **matriz1, int **matriz2, int orden){
    for (int fila=0; fila<orden; fila++){
        for (int col=0; col<orden; col++){
            if (matriz1[fila][col]<10) cout << " ";
            if (matriz1[fila][col]<100) cout << " ";            
            if (matriz1[fila][col]) cout << matriz1[fila][col] << " ";
            else cout << "* ";
        }
        cout << "   ";
        for (int col=0; col<orden; col++){
            if (matriz2[fila][col]<10) cout << " ";
            if (matriz2[fila][col]<100) cout << " ";            
            if (matriz2[fila][col]) cout << matriz2[fila][col] << " ";
            else cout << "* ";
        }
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


