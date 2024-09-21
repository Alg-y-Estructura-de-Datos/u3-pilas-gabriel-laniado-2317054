#include <iostream>
#include "Pila/Pila.h"
#include <string>
using namespace std;

void registrarDesplazamiento(Pila<std::string>& pilaMovimientos, const std::string& movimiento, const std::string& area) {
    if (movimiento == "in") {
        pilaMovimientos.push(area);
    } else if (movimiento == "out" && !pilaMovimientos.esVacia()) {
        pilaMovimientos.pop();
    }else{
        cout << "error" << endl;
    }
}

void mostrarRecorridoInverso(Pila<std::string>& pilaMovimientos) {
    std::cout << "Recorrido inverso del dia: " << std::endl;
    while (!pilaMovimientos.esVacia()) {
        std::cout << pilaMovimientos.pop() << std::endl;
    }
}

int main() {
    Pila<std::string> pilaMovimientos;

    registrarDesplazamiento(pilaMovimientos, "in", "Recepcion");
    registrarDesplazamiento(pilaMovimientos, "in", "Oficina");
    registrarDesplazamiento(pilaMovimientos, "in", "Sala de Reuniones");
    registrarDesplazamiento(pilaMovimientos, "out", "Sala de Reuniones");
    registrarDesplazamiento(pilaMovimientos, "in", "GYM");

    mostrarRecorridoInverso(pilaMovimientos);

    return 0;
}