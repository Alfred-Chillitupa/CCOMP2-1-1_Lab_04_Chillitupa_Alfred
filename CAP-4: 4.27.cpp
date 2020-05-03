#include <iostream>

using namespace std;

// Ejercicio 4.27 - Numeros Palindromos

int main(){
    
    int numero{0}, numerotemp{0}, modulo{0}, numinvertido{0}, numerofinal{0};
    unsigned int ncifras{0};

    cout << "Ingrese un numero: \n";
    cin >> numero;

    numerotemp = numero; // almacena el valor de numero para no alterarlo
    numerofinal = numero; // servira para comprobar con el numero invertido
    
    //El primer While determina el numero de digitos
    while (numerotemp > 0){
        numerotemp /= 10;
        ncifras++;
    }
    
    //El segundo While determina invierte el numero ongresado
    while(ncifras>0){
        modulo = numero % 10;                   //Determina el ultimo digito
        numero /= 10;                           //Permite trabajar con cocientes descomponiendo el numero ingresado  
        numinvertido = numinvertido*10+modulo;  //Recompone los digitos en el mismo formato del numero original(=numero de digitos)
        --ncifras;
    }
    cout << (numerofinal == numinvertido ? "El numero es palindromo" : "El numero no es palindromo") << endl;
}