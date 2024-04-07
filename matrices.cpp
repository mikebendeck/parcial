#include <iostream>
using namespace std;
 
int rotarMatriz(int**, int**, int);
int imprimirmatrices(int**, int**, int);
int copiaMatriz(int**, int**, int);


int main()
{



    int n, **ptr, **mtr;
    cout << "ingrese el orden de la matriz: " << endl;
    cin >> n;
    
    
    ptr = new int * [n];
    mtr = new int * [n];
    
    
    
    for (int i=0; i<n; i++){
        ptr [i] = new int [n];
    }
    for (int i=0; i<n; i++){
        mtr [i] = new int [n];
    }
    
    
    int contador=0;
    for (int fila=0; fila<n; fila++){
        for (int col=0; col<n; col++){
            if(fila != n/2   || col != n/2 ) ptr[fila][col] = ++contador;
            else ptr[fila][col] = 0;
        
        }
    }
    
    rotarMatriz(ptr,mtr, n);
    imprimirmatrices(ptr, mtr, n);
    cout << "\n\n";
    

    copiaMatriz(mtr, ptr, n);
    rotarMatriz(ptr,mtr,n);
    imprimirmatrices(ptr, mtr, n);
    cout << "\n\n";
    
    copiaMatriz(mtr, ptr, n);
    rotarMatriz(ptr,mtr,n);
    imprimirmatrices(ptr, mtr, n);
    cout << "\n\n";

    

    

    
    for (int i=0; i<n; i++){
        delete [] ptr[i];
        // ptr[i] = NULL;
    }
    for (int i=0; i<n; i++){
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


