#ifndef EQUIPO_H
#define EQUIPO_H

#include <string>
using namespace std;

class Equipo{

    private:
    string pais;
    string grupo;
    int puntaje;
    int partidos;

    public:
    Equipo();
    Equipo(string p, string g);
    string obtener_pais();

};

///pre: recibe 2 parametros extraidos del archivo  .txt
///post: crea una variable de tipo puntero a Equipo
//Equipo* generar_equipo(string pais, string grupo);

#endif