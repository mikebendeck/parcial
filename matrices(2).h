#include <iostream>
using namespace std;
 
int rotarMatriz(int**, int**, int);
int imprimirmatrices(int**, int**, int);
int copiaMatriz(int**, int**, int);

int e( int numDim )
{

    int **ptr, **mtr;
    
    ptr = new int * [numDim];
    mtr = new int * [numDim];
    
    
    
    for (int i=0; i<numDim; i++){
        ptr [i] = new int [numDim];
    }
    for (int i=0; i<numDim; i++){
        mtr [i] = new int [numDim];
    }
    
    
    int contador=0;
    for (int fila=0; fila<numDim; fila++){
        for (int col=0; col<numDim; col++){
            if(fila != numDim/2   || col != numDim/2 ) ptr[fila][col] = ++contador;
            else ptr[fila][col] = 0;
        
        }
    }
    
    rotarMatriz(ptr,mtr, numDim);
    imprimirmatrices(ptr, mtr, numDim);
    cout << "\n\n";
    

    copiaMatriz(mtr, ptr, numDim);
    rotarMatriz(ptr,mtr,numDim);
    imprimirmatrices(ptr, mtr, numDim);
    cout << "\n\n";
    
    copiaMatriz(mtr, ptr, numDim);
    rotarMatriz(ptr,mtr,numDim);
    imprimirmatrices(ptr, mtr, numDim);
    cout << "\n\n";

    

    

    
    for (int i=0; i<numDim; i++){
        delete [] ptr[i];
        // ptr[i] = NULL;
    }
    for (int i=0; i<numDim; i++){
        delete [] mtr[i];
        // ptr[i] = NULL;
    }

    
    
    delete  [] ptr;
    ptr = NULL;
    delete  [] ptr;
    mtr = NULL;
    

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


