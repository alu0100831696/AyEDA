#include "queue_t.hpp"

queue_t::queue_t(void):
	vector_(0),
	front_(-1),
	rear_(0)
{}
	
queue_t::~queue_t(void)
{

	front_= -1;
	rear_= 0;
	reset();
}

void queue_t::push(TDATO dato)
{
   
		front_++;
		vector_.set_dato(front_, dato);
}

TDATO queue_t::pop(void)
{
	if(!vacia())
	{
		TDATO aux = vector_.get_dato(rear_);
		rear_++;
		return aux;
	}
	else
	{
		cerr << "Cola vacía" << endl;
		exit(1);
	}
}

bool queue_t::vacia(void)
{
	return (front_ < rear_);
}

void queue_t::write(ostream& os)
{
	while(!vacia())
	    
	    os << pop() << " ";
	    
	    os << endl;
}

void queue_t::reset(void)
{
	 while(!vacia())
      {
        TDATO aux = vector_.get_dato(rear_);
        rear_++;
      }  

}
