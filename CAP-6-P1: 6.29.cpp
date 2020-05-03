#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int number){

    for(int i = 2; i <=  number/2; i++){
        if(number % i == 0){
            return false;
        }
    }

    return true;

}

bool isPrime2(int number){

    for(int i = 2; i <= sqrt(number); i++){
        if(number % i == 0){
            return false;
        }
    }

    return true;

}

int main(){

    unsigned int contador{0};

    cout << "CASO A y B: 10000 numero primos \n"; 

    for (int i = 2; i <= 10000;i++){
        if (isPrime(i)){
            contador ++;
            cout << i << "  ";
            cout<< (contador % 15 ? "" : "\n");
        }
    }
    cout << endl;
    cout << "CASO C: 10000 numero primos \n"; 
    cout << endl;
    unsigned int contador2{0};
    for (int i = 2; i <= 10000;i++){
        if (isPrime2(i)){
            contador2 ++;
            cout << i << "  ";
            cout<< (contador2 % 15 ? "" : "\n");
        }
    }
    cout << endl;
    return 0;
}

//El algoritmo que lleva un sqrt parece ser mas rapido pero a la ves tambien es complejo de entender