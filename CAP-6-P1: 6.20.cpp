#include <iostream>

using namespace std;

bool esFactor(int num1, int num2){
    return !(num1 % num2);
}

int main(){
    int val1{0},val2{0};
    
    cout << "Ingrese el primer valor: \n";
    cin >> val1;
    cout << "Ingrese el segundo valor: \n";
    cin >> val2;
    
    cout << "El numero " << val2 << " es factor de " << val1 << " "
         << boolalpha << esFactor(val1, val2) << endl;

    return 0;
}