#include <iostream>
using namespace std;

int mayor(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

bool esTriangulo(int a, int b, int c){
    if(a + b > c && a + c > b && b + c > a){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a, b, n;
    // mayor
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     cin >> a >> b;
    //     int resultado = mayor(a, b);
    //     cout << resultado << endl;
    // }

    // esTriangulo
    cin >> a >> b >> n;
    if(esTriangulo(a, b, n)){
        cout << "SI" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}