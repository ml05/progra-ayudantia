// cine vergara problema 5 de la guia 2
#include <iostream>
using namespace std;

// se pone todo en el main
// se nota que puede ser ordenado en funciones
// hare las funciones en otro archivo cineVergara-orden.cpp
int main(){
    // esta conformado por dos pisos
    int piso1[30][20];
    int piso2[15][12];
    // cada piso tiene precios diferentes, los ingresa el usuario
    int precio1, precio2;
    cin >> precio1 >> precio2;
    
    // debemos rellenar las matrices con valores 0
    // SE PUEDE USAR UNA FUNCION!
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 20; j++){
            piso1[i][j] = 0;
        }
    }
    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 12; j++){
            piso2[i][j] = 0;
        }
    }
    

    cout << "Ingrese piso: ";
    int piso;
    cin >> piso;
    bool pisoLleno = false;
    // el programa termina cuando el piso ingresado es 0
    while(piso != 0 || pisoLleno){
         // el usuario quiere el primer piso [30]x[20]
        if(piso==1){
            int fila;
            cout << endl << "Ingrese fila: ";
            cin >> fila;
            // aca estoy asumiendo que la fila se encuentra en el rango 0-29 (recordar que no puede llegar  a 30 o se sale de la matriz)
            // aca se debe imprimir la lista de asientos de la fila
            // SE PUEDE USAR UNA FUNCION!
            for(int j=0; j<30; j++){
                char butaca = ' ';
                // si el butaca es 1 significa que esta ocupado
                if(piso1[fila][j]==1){
                    butaca = 'x';
                }
                // si no es 1 (igual a 0) significa que esta disponible
                else{
                    butaca = '-';
                }
                cout << butaca << " ";
            }

            // ya se mostro la fila de indicada
            // ahora se debe pedir el asiento
            int asiento;
            cout << endl << "Ingrese su asiento: ";
            cin >> asiento;

            // se debe comprobar que no este siendo usado
            // aca el asiento esta vacio (=0)
            // SE PUEDE USAR UNA FUNCION!
            if(piso1[fila][asiento] == 0){
                piso1[fila][asiento] = 1;
                cout << endl << "Asiento comprado correctamente";
            }
            else{
                cout << endl << "El asiento esta ocupado!" << endl;
            }

            // comprobar si queda al menos un asiento
            // SE PUEDE USAR UNA FUNCION!
            for(int i=0; i<30; i++){
                for(int j=0; j<20; j++){
                    if(piso1[i][j] == 0){
                        pisoLleno = true;
                    }
                }
            }
            // todo ese codigo fue solo para el piso 1
        }
        // el usuario quiere el primer piso [30]x[20]
        else if(piso == 2){
            int fila;
            cout << endl << "Ingrese fila: ";
            cin >> fila;
            // aca estoy asumiendo que la fila se encuentra en el rango 0-14 (recordar que no puede llegar a 15 o se sale de la matriz)
            // aca se debe imprimir la lista de asientos de la fila
            for(int j=0; j<15; j++){
                char butaca = ' ';
                // si el butaca es 1 significa que esta ocupado
                if(piso1[fila][j]==1){
                    butaca = 'x';
                }
                // si no es 1 (igual a 0) significa que esta disponible
                else{
                    butaca = '-';
                }
                cout << butaca << " ";
            }

            // ya se mostro la fila de indicada
            // ahora se debe pedir el asiento
            int asiento;
            cout << endl << "Ingrese su asiento: ";
            cin >> asiento;

            // se debe comprobar que no este siendo usado
            // aca el asiento esta vacio (=0)
            if(piso1[fila][asiento] == 0){
                piso1[fila][asiento] = 1;
                cout << endl << "Asiento comprado correctamente";
            }
            else{
                cout << endl << "El asiento esta ocupado!" << endl;
            }

            // comprobar si queda al menos un asiento
            for(int i=0; i<15; i++){
                for(int j=0; j<12; j++){
                    if(piso1[i][j] == 0){
                        pisoLleno = true;
                    }
                }
            }
    }
   
    // y si se tienen 3 salas? y 4? y 100?
    // si se usan funciones, es mas facil leer y entender codigo, replicarlo se vuelve facil!
    return 0;
}