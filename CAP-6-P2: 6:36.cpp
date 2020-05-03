#include <iostream>

using namespace std;
int power(int base, int exponente){

    if (exponente == 1)
    {
        return base;
    }
    else{
        base = base * power(base,exponente - 1);
        return base;
    }
}

int main(){
    int base{0};
    unsigned int exponente{1};
    cout << "Ingrese una base: \n";
    cin >> base;
    cout << "Ingrese una exponente: \n";
    cin >> exponente;
    cout << "El numero: " << base << " elevado a " << exponente 
         << " es igual a " << power(base, exponente) << endl;
    return 0;
}