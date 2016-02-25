#ifndef _Stack_Lista_H  //sirve para que el compilador no compile dos veces lo mismo
#define __Stack_Lista_H  

#pragma once

#include "lista_t.hpp"

#include <cstddef>
#include <iostream>
#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

typedef int TDATO;

class stack_lista
{
	private:
		
		lista_t list_;
	
	public:
        
       stack_lista(void);
	   ~stack_lista(void);
	   
	   void push(TDATO dato);
	   TDATO pop(void);
	   
	   bool vacia(void);
	   
	   	void write(ostream& os);			//Mostrar cola
	  
	   
};

#endif