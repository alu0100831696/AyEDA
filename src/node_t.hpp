#ifndef _Node_t_H  //sirve para que el compilador no compile dos veces lo mismo
#define __Node_t_H  

#pragma once

#include "common.hpp"

class node_t
{
    private:
        TDATO dato_;                        //dato que guarda el nodo
        node_t* next_;                      //puntero al siguiente nodo
        
    public: 
        node_t(void);                       //constructor por defecto
        node_t(TDATO dato);                 //constructor por parametros
        ~node_t(void);                      //destructor
        
        node_t* get_next(void);             //obtiene el siguiente nodo
        TDATO get_dato(void);               //obtiene el dato del nodo
        void set_next(node_t* next);        //establece el siguiente nodo
        void set_dato(TDATO dato);          //establece el dato del nodo
        
        void write(ostream& os);	    	//Imprime lista
};

#endif