#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int suma = a+b+c;
    if (suma%2==0){
        cout << "Es par";
    } else {
        cout << "Es impar";
    }

    return 0;
}