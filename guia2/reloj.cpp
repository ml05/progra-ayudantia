#include <iostream>
using namespace std;

// desarrolle una funcion que implemente el segundero de un reloj
// que reciba la hora y devuelva esa hora sumandole un segundo
void segund_despues(int &hora, int &minuto, int &segundo){
    segundo++;
    if(segundo==60){
        segundo=0;
        minuto++;
        if(minuto==60){
            minuto=0;
            hora++;
            if(hora==24){
                hora=0;
            }
        }
    }
}

int main(){
    // se recibe la hora, minutos y segundos actuales (uno por linea)
    int hora, minuto, segundo;
    cin >> hora >> minuto >> segundo;
    // imprimir la hora avanzada en un segundo
    segund_despues(hora, minuto, segundo);
    cout << hora << ":" << minuto << ":" << segundo << endl;
    return 0;
}