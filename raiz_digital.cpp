#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int suma;
    while (n > 9){
        suma = 0;
        while (n > 0){
            suma = suma + n%10;
            n = n/10;
        }
        n = suma;
    }
    cout << suma;
    return 0;
}
