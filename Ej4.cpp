#include <iostream>
#include "Pila/Pila.h" 
using namespace std;

int Suma (Pila <int> pila, int n){
    int suma=0,valor,valor2;
    Pila <int>aux;

    while (!pila.esVacia()){
        valor = pila.pop();
        if (n==valor){
            while (!aux.esVacia()){
                valor2 = aux.pop();
                suma+=valor2;
                pila.push(valor2);
            }
        }
        aux.push(valor);
    }

    if (suma==0){
        while (!aux.esVacia()){
            valor2 = aux.pop();
            suma+=valor2;
            pila.push(valor2);
        }
    }
    return suma;
}

void mostrarPila(Pila<int>& pila) {
    Pila<int> pilaAux;

    // Desapilar elementos para mostrar sin perderlos
    while (!pila.esVacia()) {
        int valor = pila.pop();
        cout << valor << " ";
        pilaAux.push(valor);
    }
    cout << endl;

    // Restaurar la pila original
    while (!pilaAux.esVacia()) {
        pila.push(pilaAux.pop());
    }
}

int main(){

    Pila <int> pila;
    int n;

    do {
        cout<<"Introduce un numero. Ingrese 0 para finalizar: ";
        cin>>n;
        if (n!=0){
            pila.push(n);
        }
    } while (n!=0);

    cout<<"Ingrese un numero entero para buscar: ";
    cin>>n;

    cout << "Pila antes de sumar: ";
    mostrarPila(pila);

    cout<<"El resultado es: "<<Suma(pila,n);
}