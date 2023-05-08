#include <string>
using namespace std;

class Partidos{

    private:
    string Equipo1;
    string Equipo2;
    int goles_equipo1;
    int goles_equipo2;

    public:
    Partidos();
    Partidos(string e1, string e2, int gol1, int gol2);
    string obtener_ganador();
    
};

