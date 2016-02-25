#ifndef _Vector_t_H  //sirve para que el compilador no compile dos veces lo mismo
#define __Vector_t_H  

#pragma once

#include "common.hpp"

class vector_t
{
	private:
		
		TDATO* base_;                       //Puntero a datos del vector base_
		int sz_;                            //Tamaño 

	public:
        
        vector_t(void);                     //constructor por defecto
        vector_t(int sz);                   //constructor con parametros
        ~vector_t(void);                   //destructor
        
        void resize(int sz);                //redimensiona vector
        
        TDATO& operator [] (int pos);       //sobrecarga del operador [] que da la pos
        TDATO operator[] (int pos) const;   //sólo funcionará para aquellos objetos que sean constantes
      
        int get_size(void);                 //Devuelve el tamaño
        
        void set_dato(int pos, TDATO dato);    //establece dato
        TDATO get_dato(int pos);              //obtiene dato
      
    private: //Vamos a crear procedimientos para liberar y generar memoria

        void build(int sz);                 //
        void clean(void);		
};

#endif