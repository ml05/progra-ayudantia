// NO ES LA PAUTA OFICIAL NI LA ÚNICA SOLUCIÓN POSIBLE
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int tablero[n][n];
    // guardar la posicion en la que se comienza
    int pos_i, pos_j;
    cin >> pos_i >> pos_j;
    // leer datos
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cin >> tablero[i][j];
        }
    }
    cout << tablero[pos_i][pos_j];
    if (tablero[pos_i][pos_j] == 1){
        cout << "Boom!" << endl;
        return 0;
    }
    // https://bfotool.com/es/random-binary-numbers
    else {
        int minas = 0;   
         // revisar si en las casillas adyacentes hay minas
        for (int i = 0; i<n; i++){
            for (int j = 0; j<n; j++){
                // superior izquierda
                if (i == pos_i-1 && j == pos_j-1){
                    if (tablero[i][j] == 1){
                        minas++;
                    }
                }
                // superior centro
                else if (i == pos_i-1 && j == pos_j){
                    if (tablero[i][j] == 1){
                        minas++;
                    }
                }
                // superior derecha
                else if (i == pos_i-1 && j == pos_j+1){
                    if (tablero[i][j] == 1){
                        minas++;
                    }
                }
                // centro izquierda
                else if (i == pos_i && j == pos_j-1){
                    if (tablero[i][j] == 1){
                        minas++;
                    }
                }
                // centro derecha
                else if (i == pos_i && j == pos_j+1){
                    if (tablero[i][j] == 1){
                        minas++;
                    }
                }
                // inferior izquierda
                else if (i == pos_i+1 && j == pos_j-1){
                    if (tablero[i][j] == 1){
                        minas++;
                    }
                }
                // inferior centro
                else if (i == pos_i+1 && j == pos_j){
                    if (tablero[i][j] == 1){
                        minas++;
                    }
                }
                // inferior derecha
                else if (i == pos_i+1 && j == pos_j+1){
                    if (tablero[i][j] == 1){
                        minas++;
                    }
                }
                
            }
        }
        cout << minas << endl;
    }
   

    return 0;
}