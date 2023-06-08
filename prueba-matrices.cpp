#include <iostream>
using namespace std;

int main(){
    // se declaran los valores de N y M
    int N, M;
    // se ingresan los valores de N y M
    cin >> N >> M;
    // se genera una matriz para almacenar los valores
    float matriz[N][M];
    // se leen y guardan en la matriz
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> matriz[i][j];
        }
    }
    // en este punto, la matriz ya contiene lo que se ingreso
    float promedio_mayor = 0;
    int mejor_nota = 0;
    for(int j=0; j<M; j++){
        float prom_actual = 0;
        for(int i=0; i<N; i++){
            prom_actual = prom_actual + matriz[i][j];
        }
        prom_actual = prom_actual / N;
        if(prom_actual>promedio_mayor){
            promedio_mayor = prom_actual;
            mejor_nota = j+1;
        }
    }

    cout << mejor_nota;

    return 0;
}