#include "lista_t.hpp"

lista_t::lista_t(void):

	inicio_(NULL),
	fin_(NULL)
{}

lista_t::~lista_t(void) {

	node_t* aux = NULL;

	while (inicio_ != NULL) 
	{
		aux = inicio_;
		inicio_= inicio_->get_next();
		delete aux;
	}
}


void lista_t::insertar_inicio(node_t* nodo)  {

	if(vacio()){
		inicio_ = nodo;
		fin_ = nodo;
	}else {
		nodo->set_next (inicio_);
		inicio_ = nodo;
	}

}

node_t* lista_t::extraer_inicio(void) {

	if(inicio_ == fin_)
	{
		node_t* aux  = inicio_;
		inicio_= NULL;
		fin_ = NULL;
		return aux;
	}
	else
	{
		node_t* aux = inicio_;
		inicio_ = inicio_->get_next();
		return aux;
	}

}

void lista_t::insertar_final(node_t* nodo)  {

	if(vacio())
	{
		inicio_ = nodo;
		fin_ = nodo;
	}else {
	
		fin_->set_next (nodo);
		fin_ = nodo;
	}
}

node_t* lista_t::extraer_final(void) {
    
    if(inicio_ == fin_)
	{
		node_t* aux = inicio_;
		inicio_= NULL;
		fin_ = NULL;
		return aux;
	}
	else
	{
		node_t* aux = inicio_;
		while(aux->get_next() != fin_)
			aux = aux->get_next();
	    
	    fin_= aux;
	    aux = aux->get_next();
	    fin_->set_next(NULL);
	    return aux;
	}

}

node_t* lista_t::get_inicio(void) {

	return inicio_;

}

node_t* lista_t::get_fin(void) {

	return fin_;

}

void lista_t::write(ostream& os)
{
	node_t* aux = inicio_;
	while(aux != NULL)
	{
		aux->write(os);
		aux = aux->get_next();
	}
}

bool lista_t::vacio(void)
{
	return (inicio_ == NULL);
	
}





