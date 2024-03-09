#include <iostream>

using namespace std;

void converter(float valor){
    float dolar = 4.50;

   cout << "Valor em Dolar: R$" << valor*dolar << endl;
};
int main(){
    float real;
    cout << "Valor em Real: ";
    cin >> real;
    converter(real);

    return 0;
}