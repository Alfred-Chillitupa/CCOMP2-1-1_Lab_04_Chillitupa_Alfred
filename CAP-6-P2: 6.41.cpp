#include <iostream>

using namespace std;

int gcd(int x, int y){
    if (y==0){
        return x;
    }else{
        return gcd(y, x % y);
    }
    }
int main(){
    int num1{0}, num2{0};

    cout << "Ingrese dos numeros\n";
    cin >> num1 >> num2;

    cout << "El maximo comun divisor de " << num1 << " y " << num2 << " es " << gcd(num1, num2) << endl;

    return 0;
}