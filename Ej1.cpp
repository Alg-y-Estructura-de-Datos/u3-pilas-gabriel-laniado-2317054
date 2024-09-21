#include <iostream>
#include "Pila/Pila.h"
using namespace std;

int main() {

    Pila <char> pila;
    char caracter;

    cout<<"Ingrese una palabra y termine con un punto: ";

    do{
        cin.get(caracter);
        if (caracter != '.'){
            pila.push(caracter);
        }
    } while(caracter != '.');

    while (!pila.esVacia()){
        cout<<pila.pop();
    }
    cout<<endl;
    return 0;
}
