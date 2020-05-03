
#include <iostream>

using namespace std;

// Ejercicio 4.27 - Equivalente decimal de un numero binario

int main(){
    
    int numbinario{0}, temp{0}, modulo{0}, equivdecimal{0},valposicional{1};
    unsigned int ndigitosbinarios{0};
    
    cout << "Ingrese un numero binario: \n";
    cin >> numbinario;
    
    temp = numbinario; //almacena el valor de numero para no alterarlo
    
    //El primer While determina el numero de digitos
    while (temp > 0){
        temp /= 10;
        ndigitosbinarios++;
    }

    //El segundo While encuentra el equivalente decimal del numero binario
    while(ndigitosbinarios>0){
        modulo = numbinario % 10;
        numbinario /= 10;
        equivdecimal += (modulo * valposicional); //almacena el equivalente decimal en cada iteracion
        valposicional*=2; // permite obtener el valor posicional con 2
        --ndigitosbinarios;
    }
    cout << equivdecimal << endl;
    return 0;
}