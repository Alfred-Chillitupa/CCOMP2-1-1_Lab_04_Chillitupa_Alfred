#include <iostream>

using namespace std;

int reverse(int number){
    int modulo{0}, numinvertido{0}, pmodificar{number};
    unsigned int contador{0};

    while (pmodificar > 0){
        pmodificar /= 10;
        contador++;
    }
    for (contador; contador > 0; contador--){
        modulo = number % 10;
        number /= 10;
        numinvertido = numinvertido*10+modulo;
    }
    return numinvertido;
}


int main(){

    int numero{0},contador{0},a{0};
    cout << "Ingrese un numero: \n";
    cin >> numero;
    cout << "Usted ingreso: " << numero << " invirtiendo los digitos es: " << reverse(numero) << endl;
    return 0;
}