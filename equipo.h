#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "fase.h"

using namespace std;

class Equipo{ 

    private:
    string pais; 
    string grupo;
    int puntaje;
    vector <Fase> vector_fases;
    int cantidad_fases;

    public:
    Equipo();
    Equipo(string p, string g);
    void alta_fase(Fase f);
    string obtener_pais();
    void procesar_equipo();
};
#endif