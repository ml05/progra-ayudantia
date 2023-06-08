#include <iostream>
#include <random>
using namespace std;

// funcion que recibe como argumento una matriz
// la llena con valores aleatorios
void rellenarMatriz(int matriz[8][8]){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            matriz[i][j] = rand();
        }
    }
}

// funcion que recibe una fila de una matriz
// imprimir todos los valores de dicha fila
void imprimirFila(int fila[8]){
    for(int i=0; i<8; i++){
        cout << fila[i] << " ";
    }
    cout << endl;
}

// funcion que recibe una matriz y la imprime
// usa la funcion anterior
void imprimirMatriz(int matriz[8][8]){
    for(int i=0; i<8; i++){
        imprimirFila(matriz[i]);
    }
}

// funcion que recibe una matriz y un numero de columna
// devuelve la suma de los valores de dicha columna
int sumaColumna(int matriz[8][8], int columna){
    int suma = 0;
    for(int i=0; i<8; i++){
        suma += matriz[i][columna];
    }
    return suma;
}

// funcion que recibe una matriz y un valor X
// determina si el valor existe en la matriz
// si existe, imprimir todos los elementos que se encuentran en la misma fila, la suma de los elementos de la mnisma columna
// si no, imprimir solo una linea con el texto "no encontrado"
void buscarValor(int matriz[8][8], int valor){
    bool encontrado = false;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(matriz[i][j]==valor){
                encontrado = true;
                cout << "Suma de la columna: " << sumaColumna(matriz, j) << endl;
                imprimirFila(matriz[i]);
            }
        }
    }
    if(!encontrado){
        cout << "No encontrado" << endl;
    }
}




int main(){
    // declarar matriz de 8x8
    int matriz[8][8];
    // llenar la matriz con valores aleatorios
    rellenarMatriz(matriz);
    // imprimir la matriz
    imprimirMatriz(matriz);

    return 0;
}