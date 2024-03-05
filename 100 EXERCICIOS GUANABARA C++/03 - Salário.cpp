#include <iostream>

using namespace std;

int main(){
    float salario;
    string nome;

    cout << "Nome Do Funcionario: ";
    cin >> nome;
    cout << "Salario: ";
    cin >> salario;
    cout << "O funcionario " << nome << " recebe R$" << salario << endl; 
    return 0;
}