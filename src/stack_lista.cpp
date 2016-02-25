#include "stack_lista.hpp"

stack_lista::stack_lista(void):
    list_()
{}

stack_lista::~stack_lista(void)
{}
	
void stack_lista::push(TDATO dato)
{		
    list_.insertar_final(new node_t(dato));
}
	
	
TDATO stack_lista::pop(void)
{
    node_t* aux = (node_t*) list_.extraer_final();
		if (aux!=NULL){
			return aux->get_dato();
		}
		else{
			cerr << "Pila vacía" << endl;
		}
}


bool stack_lista::vacia(void)
{
    return (list_.get_inicio() == NULL);
}

void stack_lista::write(ostream& os)
{
	while(!vacia())
	    
	    os << pop() << " ";
	    
	    os << endl;
}
	
	
	
