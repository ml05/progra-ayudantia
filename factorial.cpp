#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    // imprimir triangulo de asteriscos
    int factorial = 1;
    for(int i = 1; i<=n; i++){
        factorial = factorial*i;
    }


    return 0;
}