/* 
 * File:   MemoriaROM.h
 * Author: Araceli
 *
 * Created on 2 de noviembre de 2016, 18:45
 */

#ifndef MEMORIAROM_H
#define	MEMORIAROM_H
#include "Proceso.h"

using namespace std;

class MemoriaROM {
public:
    MemoriaROM();
    virtual ~MemoriaROM();
    void CrearProcesos(int, int);
    vector <Proceso> getProcesos();
private:
    vector<Proceso> procesos;
};

#endif	/* MEMORIAROM_H */

