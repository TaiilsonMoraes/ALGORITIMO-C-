#include <iostream>

using namespace std;

int main(){
    int n1,n2,n3;
    string resp;
    while(true){
        cout << "Digite o primeiro numero: ";
        cin >> n1;
        cout << endl;
        cout << "Digite o segundo numero: ";
        cin >> n2;
        n3 = n1 + n2;
        cout << endl;
        cout << "A Soma e: " << n3 <<endl;        
    };
    
    return 0;
}