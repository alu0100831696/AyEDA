#pragma once

#include "lista_t.hpp"

class queue_lista
{
	private:
		
		lista_t list_;															//Atributo: Vector donde se guardarán los datos de la cola

	public:
        
       queue_lista(void);
       ~queue_lista(void);
       
       void push(TDATO dato);
       TDATO pop(void);
       
       bool vacia(void);
       
       void write(ostream& os);			//Mostrar cola

};