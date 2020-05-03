#include <iostream>

using namespace std;

int main(){

    int numero{0};
    cout << "Ingrese un el tamaño del triangulo: " << endl;
    cin >> numero;

    cout << "Figura (a)" << endl;
    for (int i = 0; numero > i; i++){

        for (int j = 0; i >= j; j++){
            cout << "*";
        }

        cout << "\n";
    }

    cout << endl;

    cout << "Figura (b)" << endl;
    for (int i = 0; numero > i; i++){
        for (int j = numero; j > i; j--){
            cout << "*";
        }

        cout << "\n";
    }

    cout << endl;

    cout << "Figura (c)" << endl;
    for (int i = numero; i > 0; i--){
        for (int espacio = 0; espacio < numero - i; espacio++){
            cout << " "; 
        }
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
        
    }
    
    cout << endl;

    cout << "Figura (d)" << endl;
    for (int i = 1; i <= numero; i++){
        for (int espacio = 0; espacio < numero - i; espacio++){
            cout << " "; 
        }
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
        
    }

    return 0;
}