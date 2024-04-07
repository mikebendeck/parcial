#include <iostream>
#include "matrices(2).h"
#include "CrearEstructura.h"

int main(){ 

    int dimen;
    cout << "Ingrese el numero de dimension que desea ingresar";
    cin >> dimen;

    while (dimen < 0 || dimen % 2 == 0) {
        cout << "Ingreso una dimension no valida" << endl;
        cout << "Ingrese el numero de dimension que desea ingresar: ";
        cin >> dimen;
    }

    
    imprimirMatrix(crearMatrix(dimen), dimen);
    imprimirMatrix(rotarMatriz(crearMatrix(dimen), dimen), dimen);

    int numeros[] = {3, 5, 7};
    int*** estructura = create3DArray(numeros);

    for( int eq = 0; eq <= 2; eq++ ){

        for( int i = 0; i < numeros[eq]; i++){

            for( int j = 0; j < numeros[eq]; j++){


                cout << estructura[eq][i][j] << " ";

            }

            cout << endl;


        }

        cout << endl;

    }
}