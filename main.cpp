#include <iostream>
#include "matrices(2).h"

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

}