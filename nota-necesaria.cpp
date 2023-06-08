#include <iostream>
using namespace std;

int main(){
    float nc, nlab;
    cin >> nc >> nlab;
    float nex = (4.0-0.6*nc-0.1*nlab)/0.3;
    cout << nex;

    return 0;
}