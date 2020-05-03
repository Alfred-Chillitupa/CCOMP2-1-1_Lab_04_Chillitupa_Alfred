#include <iostream>

using namespace std;

// Ejercicio 4.30 - Secuencia Fibonacci

int main(){

    int numanterior{1}, numposterior{1}, numactual{0},limite{20}; 
    //Se definio un limite para evitar el while infinito a pesar de que el ejercicio lo demande 
    unsigned int i{0};

    while (limite>i){
        
        //El If imprime el numero inicial 0 y else if los los 1 1
        //El else permitira seguir la serie modificando valores anterior,posterior y actual
        if (i==0){
            cout << numactual << " "; 
            i++;
        }else if (i==1 || i ==2){
            cout << numanterior << " "; 
            i++;
        }
        else{
            numactual = numanterior + numposterior;
            numanterior = numposterior;
            numposterior = numactual;
            cout << numactual << " ";
            i++;
        }
    }
    return 0;
}