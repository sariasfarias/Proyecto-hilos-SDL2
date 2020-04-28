/* 
 * File:   graficar.h
 * Author: Araceli
 *
 * Created on 2 de noviembre de 2016, 22:54
 */
#include <vector>
#include <thread>
#include <windows.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>  
#include <cstdio>  
#include <map> 
#include<mutex>
#include<utility>

using namespace std;

#ifndef GRAFICAR_H
#define GRAFICAR_H

class graficar {
private:
    	mutex mtx;
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Texture *texture ;
	SDL_Surface *bmp ;
	SDL_Rect rectangulo ;
	SDL_Event event;

public:
	
	graficar(int a);
	void dibujar(int r,int g,int b,int x, int y,int tamano);
	void VentanaPpal();
	void Salir();
	void drawGrid();
	void GenerarFondo(int winsizex, int winsizey);
	int ProcesosHilos(int x, int y, int tamano1,int tamano2,int tamano3,int tpo, int hilo);
};

#endif

