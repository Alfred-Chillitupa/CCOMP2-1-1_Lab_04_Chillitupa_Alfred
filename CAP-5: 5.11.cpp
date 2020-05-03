#include <iostream>

using namespace std;

int main(){
    int numvalores,val1{0},val2{0},valmenor{0};
    unsigned int contador{0}; // Se declara un cont para validar un input de 1
    
    for (cin >> numvalores; numvalores > 0; numvalores--){
             
        cout << "Ingrese un numero: " << endl;
        cin >> val2;

        contador++;
        
        if (contador>1){
            val1 = valmenor; 
            if(val1<val2){
                valmenor = val1;
            }else{
                valmenor = val2;
            }
        }else{
            valmenor = val2; //El unico valor posible si se ingresa 1 dato
            //Permite que en la primera iteracion se guarde el valor ingresado para poder comparalor en un nueva iteracion
        }
    }
    cout << "\n" << "El menor valor de los datos ingresados es: " << valmenor << endl;
    
    return 0;
}