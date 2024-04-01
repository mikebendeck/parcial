#include <iostream>
using namespace std;


int main()
{

/*   int n, *ptr;
    cout << "ingrese un number: " << endl;
    cin >> n;
    
    
    ptr = new int [n];
    ptr[0] = 99;
    ptr[1] = 50;
    delete [] ptr;
    ptr = NULL;
*/

    int n, **ptr;
    cout << "ingrese un number: " << endl;
    cin >> n;
    
    
    ptr = new int * [n];
    
    for (int i=0, i<n, i++){
        ptr [i] = new int [n];
    }
    

    
    for (int i=0, i<n, i++){
        delete [] ptr[i];
        // ptr[i] = NULL;
    }
    
    
    delete [] ptr;
    ptr = NULL;
    

    return 0;
}
