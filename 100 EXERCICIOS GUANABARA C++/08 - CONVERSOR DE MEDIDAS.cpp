#include <iostream>

using namespace std;

int main(){
float km,hm,dam,dm,cm,mm,metros;
while (metros != 0)
{
 cout << "Digite a distancia em metros: ";
cin >> metros;
km = metros / 1000;
hm = metros / 100;
dam = metros / 10;
dm = metros * 10;
cm = metros * 100;
mm = metros * 1000;

cout <<  "KM: " << km <<  "\nHM: " << hm << "\nDAM: " << dam << endl;
cout <<  "DM: " << dm <<  "\nCM: " << cm << "\nMM: " << mm << endl;
    /* code */
}



    return 0;
}