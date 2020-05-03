#include <iostream>

using namespace std;

int potEntera(int base, int exponente){
    int resultado{1};
    for (int i = 1; i <= exponente; i++)
        resultado *= base;
    return resultado;
}

int main(){
    int base{0};
    unsigned int exponente{1};
    cout << "Ingrese una base: \n";
    cin >> base;
    cout << "Ingrese una exponente: \n";
    cin >> exponente;
    cout << "El numero: " << base << " elevado a " << exponente 
         << " es igual a " << potEntera(base, exponente) << endl;
    return 0;
}