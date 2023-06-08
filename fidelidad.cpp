#include <iostream>
using namespace std;

int main(){
    int compra;
    int suma = 0;
    cin >> compra;
    int puntos = 0;
    // se detiene cuando la compra ingresada es 0
    while (compra != 0){
        // se bonifica solo cuando las compras posteriores sean superior a 10.000
        if (suma >= 10000){
            // si la compra es menor a 1000 puntos, obtiene solo el 10%
            if (compra < 1000){
                puntos = puntos + compra*0.10;
            }
            // si la compra esta en el intervalo [1000, 5000), obtiene el 25%
            else if (compra < 5000){
                puntos = puntos + compra*0.25;
            }
            // compras mayores o iguales a 5000 obtienen el 50%
            else{
                puntos = puntos + compra*0.50;
            }
        }
        suma = suma + compra;
        cin >> compra;
    }
    // imprime la cantidad de puntos acumulados
    cout << puntos << endl;
    return 0;
}


