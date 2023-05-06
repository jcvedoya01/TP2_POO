#include <iostream>
#include "equipo.h"

using namespace std;

Equipo::Equipo(){
    puntaje = 0;
    partidos = 0;
}
Equipo::Equipo(string p, string g){
    pais = p;
    grupo = g;
}

string Equipo::obtener_pais(){
    return pais;
}

