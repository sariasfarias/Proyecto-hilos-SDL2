/* 
 * File:   MemoriaRAM.h
 * Author: Araceli
 *
 * Created on 2 de noviembre de 2016, 22:53
 */

#ifndef MEMORIARAM_H
#define	MEMORIARAM_H
#include "Proceso.h"
#include "graficar.h"

class MemoriaRAM {
private:
		
	vector<Proceso> procesos;
	vector< int > Vector1;
	vector< int > Vector2;
	int cant;
	
public:
	void EjecutarProcesos();
	void MemoriaAleatoria();
        void MemoriaSecuencial();
	MemoriaRAM(vector<Proceso> procesos);
	~MemoriaRAM();
};

#endif