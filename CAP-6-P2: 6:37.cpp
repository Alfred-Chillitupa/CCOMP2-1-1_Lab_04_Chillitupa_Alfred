#include <iostream>

using namespace std;

int fibonacci(int number){

    if(number == 1 or number == 0){
        return number;
    }else{
        return fibonacci(number-1) + fibonacci(number-2);
    }
}

int main(){

    int number{0}; 
    cout << "Digite el numero de terminos: "; 
    cin >> number;

    for(int i = 0; i <= number - 1; i++){
        cout << fibonacci(i) << " ";
    }

    return 0;
}