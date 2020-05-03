#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    cout << fixed << setprecision(2);

    double principal{24.00};
     double ratelimit{0.1};

    
   
    for (double rate = 0.05; ratelimit >= rate; rate += 0.01){
        
        cout << "\nYear" << setw(20) << "Amount on deposit" << endl;
        cout << "Initial principal: " << principal << endl;
        cout << "    Interest rate:    " << rate << endl;
        cout << endl;
        //Current year 2020 with Coronavirus
       
        for (unsigned int year{1}; year <= 2020 - 1626; year++){
            double amount = principal * pow(1.0 + rate, year);
            cout << setw(4) << year << "\t" << setw(20) << amount << endl;
        }
        
    }
        return 0;
}

//De hecho que fue una buena inversion en el radio del 5% al 10% se evindencias sustanciosas ganancias