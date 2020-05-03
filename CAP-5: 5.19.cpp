#include <iostream>
#include <iomanip> 

using namespace std;

int main(){
    
    double numerador{4.0}, denominador{1.0}, valpi{0.0};
    long i, a;
    
    cout << "Termino \t"
         << "Valor de pi" << endl;
    for (long i = 1; 130658 >= i;i++){
        
        i % 2 ? valpi += numerador / denominador : valpi -= numerador / denominador;
        
        denominador += 2;
        
        cout << i << "\t\t" << fixed << setprecision(5)<< valpi << endl;
        a = i;
        
    }
    cout << "El numero de terminos necesarios para obtener Pi = 3.14159 es: " << a <<endl;
    return 0;
}