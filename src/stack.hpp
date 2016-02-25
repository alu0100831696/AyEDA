#ifndef _Stack_t_H  //sirve para que el compilador no compile dos veces lo mismo
#define __Stack_t_H  

#pragma once

#include "vector_t.hpp"

class stack_t
{
	private:
		
		vector_t vector_;
		int top_;

	public:
        
       stack_t(void);
	   ~stack_t(void);
	   
	   void push(TDATO dato);
	   TDATO pop(void);
	   
	   bool vacia(void);
	   
	   	void write(ostream& os);			//Mostrar cola
	  
	   
};

#endif