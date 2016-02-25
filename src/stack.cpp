#include "stack.hpp"

stack_t::stack_t(void):
    
    vector_(0),
	top_(-1)
{}

stack_t::~stack_t(void)
{
    top_ = -1;
    
}
	
void stack_t::push(TDATO dato)
{		
   
        top_ ++;
        vector_.set_dato(top_, dato);

}
	
	
TDATO stack_t::pop(void)
{
    if (!vacia())
    {
        TDATO aux = vector_.get_dato((top_));
		top_ --;
		return aux;
	}else{
	    cerr << "Pila Vacía" << endl;
		exit(1);
	}
}


bool stack_t::vacia(void)
{
    return (top_ == -1);
}

void stack_t::write(ostream& os)
{
	while(!vacia())
	    
	    os << pop() << " ";
	    
	    os << endl;
}
	
	
	
