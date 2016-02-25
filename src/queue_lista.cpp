#include "queue_lista.hpp"

queue_lista::queue_lista(void):
    list_()
{}
	
queue_lista::~queue_lista(void)
{}

void queue_lista::push(TDATO dato)
{
    list_.insertar_inicio(new node_t(dato));
	
}

TDATO queue_lista::pop(void)
{
	node_t * aux = (node_t*) (list_.extraer_final());
	return aux -> get_dato();
}

bool queue_lista::vacia(void)
{
     return (list_.get_inicio() == NULL);
}

void queue_lista::write(ostream& os)
{
	while(!vacia())
	    
	    os << pop() << " ";
	    
	    os << endl;
}
