#include <string>
#include "nodo.h"

using namespace std;


Nodo::Nodo(Equipo paramentroEquipo){
    equipo = paramentroEquipo;
    siguiente = 0;
}

Equipo Nodo::obtener_elemento(){
     return equipo;

}


Nodo* Nodo::obtener_siguiente(){
    return siguiente;
}

void Nodo::cambiar_siguiente(Nodo* puntero){
    siguiente = puntero;

}

