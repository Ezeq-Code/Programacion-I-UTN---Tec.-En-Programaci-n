#include<iostream>
using namespace std;

int main(){
int a, b, aux;

cout << "Ingresa el primer numero entero: ";
cin >> a;

cout << "Ingresa el segundo numero entero: ";
cin >> b;

aux = a;
a=b;
b=aux;

cout << "A: " << a << "                                    B: " << b;
return 0;
}
