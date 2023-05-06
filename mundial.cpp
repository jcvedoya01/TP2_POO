
#include "mundial.h"
#include "equipo.h"

ListaMundial::ListaMundial(){
    ultimo = 0;
} 

void ListaMundial::alta(Equipo elemento){
    Nodo *aux = new Nodo(elemento);
    aux ->cambiar_siguiente(ultimo);
    ultimo = aux;
}

Equipo ListaMundial::baja() {
    Nodo *aux = ultimo;
    Equipo datoBaja = aux->obtener_elemento();
    ultimo = aux->obtener_siguiente();
    delete aux;
    return datoBaja;
}

bool ListaMundial::vacia(){
    return (ultimo == 0);
}

Equipo ListaMundial::consulta(){
    return (ultimo->obtener_elemento());
}

ListaMundial::~ListaMundial(){
    while(!vacia()){
        baja();
    }
}
