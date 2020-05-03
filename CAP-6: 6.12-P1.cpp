#include <iostream>
#include <math.h>
using namespace std;

double calculateCostes(double horas){
    double costes;
    if (horas < 3.0){
        costes = 20.00;
    }else if (horas == 0){
        costes = 0.00;
    }
    else if(horas <= 9){
        costes = 20.00 + 5 * ceil(horas - 3);
    }
    else{
        costes = 50.00;
    }
    return costes;
}

int main(){

    int numcarros{3};
    
    double horas{0.0}, costes{0.00}, totalhoras{0.0},totalcostes{0.00};

    cout << "Car \t"
         << "Horas \t"
         << "Costes \t" << endl;
    cout << "Ingrese las horas respectivas de los carros\n";
    for (int i = 1; i <= numcarros; i++){
        cin >> horas;
        costes = calculateCostes(horas);
        cout << numcarros << "\t" << horas << "\t" << costes << endl;
        totalhoras += horas;
        totalcostes += costes;
    }
    cout << numcarros << "\t" << totalhoras << "\t" << totalcostes << endl;
        return 0;
}