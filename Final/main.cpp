#include <iostream>
#include "MemoriaROM.h"
#include "MemoriaRam.h"
#include "graficar.h"
using namespace std;


int main (int argc, char** argv){// no olvidar argumentos, porque SDL.h tiene una directiva donde define al main de una manera y luego pisa mi main.
    srand(time(0));
    MemoriaROM ROM;
    int cantProcP;
    int cantSubProc;
    bool tipo;
    cout<<"Cuantos procesos desea crear como maximo?"<<endl;
    cin>>cantProcP;
    cout<<"Cuantos subprocesos desea crear como maximo?"<<endl;
    cin>>cantSubProc;
    ROM.CrearProcesos(cantProcP,cantSubProc);
    MemoriaRAM RAM(ROM.getProcesos());
    
    cout<<"Que memoria desea ejecutar"<<endl;
    cout<<"0. Memoria Secuencial"<<endl;
    cout<<"1. Memoria Aleatoria"<<endl;
    cin>>tipo;
    if(tipo){
        RAM.MemoriaAleatoria();
    }else{
        
        RAM.MemoriaSecuencial();
    }
    
    RAM.EjecutarProcesos();
    return 0;
}