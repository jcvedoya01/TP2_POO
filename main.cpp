#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "menu.h"
#include "mundial.h"
using namespace std;

    
int main (){
    ListaMundial Lst ;
    cargar_lista(Lst);

    while(!Lst.vacia()){
        Lst.baja();
    }

    mostrar_menu();
    int opcion;
    cin>>opcion;
    procesar_opcion(opcion);



    

    return 0;
}