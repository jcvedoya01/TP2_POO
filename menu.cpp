#include "menu.h"
#include "mundial.h"


void procesar_opcion(int &opcion,ListaMundial lst){

    string equipo_elegido;

    switch (opcion){

        case 1:
        //ordeno lista
        break;

        case 2:
        //muestro 1er, 2do , 3er puesto
        
        break;

        case 3:
        cout<<"INGRESE EL NOMBRE DE UN EQUIPO"<<endl;
        cin>>equipo_elegido;
        cout<<endl;
                cout<<"PAIS: "<<endl;
                cout<<"GRUPO: "<<endl;
                cout<<"PUNTAJE: "<<endl;
                cout<<"FASE: "<<endl;
               
                    cout<<"PUESTO: ";
                    cout<<endl;
                
                cout<<endl;    
            
        
        break;

        case 4:
        //mostrar grupos ordenados por puntaje
        break;

        case 0:
        cout<<" ADIOS! "<<endl;
        break;

    }

}

void mostrar_menu(){
    cout<< "1   LISTADO DE EQUIPOS "<<endl;
    cout<< "2   EQUIPOS EN 1ER, 2DO Y 3ER LUGAR "<<endl;
    cout<< "3   BUSCAR EQUIPO POR NOMBRE "<<endl;
    cout<< "4   EQUIPOS POR FASE"<<endl;
    cout<< "0   SALIR "<<endl;
}

bool opcion_valida(int opcion){
    return(opcion>=0 && opcion<=4);
}