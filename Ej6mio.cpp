#include <iostream>
#include "Pila/Pila.h"
#include <string>
using namespace std;

void RegistrarMovimientos(Pila <string>&pila, string area, string movimiento){
    if (movimiento=="in"){
        pila.push(area);
    } else if (movimiento=="out" && !pila.esVacia()){
        pila.pop();
    } else {
        cout<<"Error.";
    }
}

void EscribirReves (Pila <string> pila) {
    cout<<"Recorrido inverso: "<<endl;
    while (!pila.esVacia()){
        cout<<pila.pop()<<endl;
    }
}

int main(){
    Pila <string> pila;

    RegistrarMovimientos(pila, "Recepcion", "in");
    RegistrarMovimientos(pila, "Oficina", "in");
    RegistrarMovimientos(pila, "Sala de Reuniones", "in");
    RegistrarMovimientos(pila, "Sala de Reuniones", "out");
    RegistrarMovimientos(pila, "GYM", "in");
    
    EscribirReves(pila);
}