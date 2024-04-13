#include <iostream>
using namespace std;

int main (){
int hour, value;

cout << "Ingresa valor por hora: ";
cin >> value;

cout << "Ingresa horas trabajadas: ";
cin >> hour;

int total = hour * value;

cout << "Total a pagar: " << total;

return 0;
}
