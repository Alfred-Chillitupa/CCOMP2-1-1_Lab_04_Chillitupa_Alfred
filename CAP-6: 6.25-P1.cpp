#include <iostream>
#include <math.h>
using namespace std;

int timeonMinutes(int m, int d, int h){
    return 43800 * m + 1440 * d + 60*h;
}

int main(){
    int m{0}, d{0}, h{0}, timeinput{0}, timeinput2{0};
    
    cout << "Ingrese la primera fecha en mm - dd -- hh \n";
    cin >> m >> d >> h;
    timeinput = timeonMinutes(m, d, h);
    
    cout << "Ingrese la segunda fecha en mm - dd -- hh (Tiene que ser mayor al primer input)\n";
    cin >> m >> d >> h;
    timeinput2 = timeonMinutes(m, d, h);

    cout << "La diferencia entre la segunda fecha y la primera fecha es: " << timeinput2 - timeinput << endl;

    return 0;
}