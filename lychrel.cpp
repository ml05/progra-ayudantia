#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int aux = N;
    // invertir un numero: 123 -> 321
    int invertido = 0;
    while (N!=invertido){
        while (aux != 0){
        invertido = invertido*10 + aux%10;
        aux = aux/10;
    }
    int N = N + invertido;
    }
    
    // determinar si un numero es capicua
    


    return 0;
}
