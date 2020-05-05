#include <iostream>

using namespace std;

// Ejercicio 4.26 - Cuadrado de asteriscos

int main(){
    int tamano{0}, tamreal{0};

    unsigned int contador{1}; // el contador es inicializado en 1 para evitar la division con 0

    cout << "Ingrese el tamaño: \n";
    cin >> tamano;

    tamreal = tamano * tamano;  // determina el numero de * a imprimir

    while (contador <= tamreal){
        
        cout << "*";

        //El If evalua las posiciones para insertar el cuadrado interno considerando evitar el extremo superior e inferior
        if (contador%tamano && contador>tamano && contador<tamreal-tamano){
            
                int tamcuadradointerno = tamano - 2; //se determino esta regla general para el tamaño del cuadrado interno 
                
                while(tamcuadradointerno>0){
                    cout << " ";
                    tamcuadradointerno--;
                    contador++; // se vuelve a invocar a el contador para considerar los espacios que ocupa el cuadrado interno
                }
        }else if(contador%tamano==0){
            cout << endl; //imprime el salto de linea cada ves que encuentre un multiplo del tamaño ingresado
        }
        
        contador++; 
    }
    return 0;
}