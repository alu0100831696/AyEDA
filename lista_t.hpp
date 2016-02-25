#ifndef _Lista_t_H  //sirve para que el compilador no compile dos veces lo mismo
#define __Lista_t_H  

#pragma once

#include "node_t.hpp"

#include <cstddef>
#include <iostream>
#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

class lista_t
{
    private:
       
       node_t* inicio_;                     //Puntero al nodo inicial
       node_t* fin_;                        //Puntero al nodo final
        
    public: 
        
        lista_t(void);                      //Constructor por defecto
		~lista_t(void);                     //Destructor
	
		void insertar_inicio(node_t* nodo);	//Insertar inicio
		void insertar_final(node_t* nodo);  //Insertar al final
		node_t* extraer_inicio(void);       //Extraer al inicio
		node_t* extraer_final(void);       //Extraer al final
		node_t* get_inicio(void);          //Obtener inicial
		node_t* get_fin(void);             //Obtener inicial
		
		bool vacio(void);
		void write(ostream& os);			//Mostrar lista
	
};

#endif