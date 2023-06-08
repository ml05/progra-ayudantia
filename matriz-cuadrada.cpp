#include <iostream>
using namespace std;

int main(){
    int n;
    int matriz[3][3];
    // se ingresan los datos a la matriz, 
    // sin necesidad de crear variables extra para guardarlos
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> matriz[i][j];
        }
    }
    // en este punto, la matriz ya contiene lo que se ingreso
    int diagonal = 0;
    int primera_fila = 0;
    int ultima_columna = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            // si esta en la diagonal, entonces se suma
            if(i == j){
                diagonal = diagonal + matriz[i][j];
            }
            // condicion aparte de la anterior, no estan relacionadas o son excluyentes
            // si esta en la primera fila, entonces se suma
            if(i == 0){
                primera_fila = primera_fila + matriz[i][j];
            }
            // condicion aparte de las anteriores, no estan relacionadas o son excluyentes
            // si esta en la ultima columna, entonces se suma
            if(j == 2){
                ultima_columna = ultima_columna + matriz[i][j];
            }
        }
    }

    cout << diagonal << endl << primera_fila << endl << ultima_columna;

    return 0;
}