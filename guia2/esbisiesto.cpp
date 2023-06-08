#include <iostream>
using namespace std;

// programar funcion booleana que devuelva true si el anio es bisiesto
// debe ser divisible por 4, por 100 y por 400
bool esBisiesto(int anho){
    if(anho%4==0){
        if(anho%100==0){
            if(anho%400==0){
                return true;
            }else{
                return false;
            }
        }else{
            return true;
        }
    }else{
        return false;
    }
}

int main(){

    // ingresar anio
    int anho;
    cin >> anho;
    // usar la funcion para determinar si es bisiesto
    // retorna verdadero cuando es bisiesto
    if(esBisiesto(anho)){ 
        cout << "Es bisiesto" << endl;
    } else{
        cout << "No es bisiesto" << endl;
    }

    return 0;
}