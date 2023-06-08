#include <iostream>
using namespace std;

int sumar(int a, int b){
    int suma = a + b;
    return suma;
}

int main(){
    int a, b;
    cin >> a >> b;
    int resultado = sumar(a, b);
    cout << resultado << endl;
    return 0;
}

