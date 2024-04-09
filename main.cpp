#include <iostream>
#include "OperacionesMatrices.h"
#include "CrearEstructura.h"
#include "ReglaEstructura.h"

int main(){ 

    int *** estructura ;

    int lenNumeros;

    cout << "Ingrese el tamaño de las matrices que van a componer la estructura. Recuerde que tienen que ser mayor que uno e impares" << endl;
    cin >> lenNumeros;

    int* dimensionMatrices = new int[lenNumeros]{};

    for (int i = 0; i < lenNumeros; i++) {

        cout << "Ingrese el tamaño de la matrix en la posicion " << i + 1 << endl;
        cin >> dimensionMatrices[i];

        while( dimensionMatrices[i] < 1 || dimensionMatrices[i] % 2 == 0){

            cout << "Ingreso un numero menor que uno o par. Ingrese el tamaño del elemento en posicion " << i +1 << " de nuevo" << endl;
            cin >> dimensionMatrices[i];

        }

    }

    estructura = create3DArray( dimensionMatrices, lenNumeros );

    int posicionx;
    int posiciony;

    cout << "Ingrese el valor de posicionx: ";
    cin >> posicionx;

    cout << "Ingrese el valor de posiciony: ";
    cin >> posiciony;

    int*** lv = listaDeValores(estructura, 3, dimensionMatrices, posicionx, posiciony );

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 2; k++) {
                cout << lv[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

}