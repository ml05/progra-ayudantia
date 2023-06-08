#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cin >> a >> b >> c;
    float promedio = (a+b+c)/3;
    if (promedio >= 5){
        cout << "EXIMIDO";
    }
    else if (promedio < 3.5){
        cout << "REPROBADO";
    }    
    else {
        cout << "RINDE EXAMEN";
    }

    return 0;
}