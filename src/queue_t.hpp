#pragma once

#include "vector_t.hpp"

class queue_t
{
	private:
		
		vector_t vector_;															//Atributo: Vector donde se guardarán los datos de la cola
		int front_;																	//Atributo: Posición del primer elemento
		int rear_;	

	public:
        
       queue_t(void);
       ~queue_t(void);
       
       void push(TDATO dato);
       TDATO pop(void);
       
       bool vacia(void);
       
       void write(ostream& os);			//Mostrar cola
       
       void reset(void);
      
};