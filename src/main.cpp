#include "vector_t.hpp"
#include "lista_t.hpp"
#include "node_t.hpp"
#include "stack.hpp"
#include "queue_t.hpp"

#define MAX 10

using namespace std;


int main(void)
{
    
    /*VECTOR_T*/
    
    vector_t v1;
    vector_t v2;
    vector_t v3(10);
    
    v1.resize(5);
    v2.resize(5);
    
    
    for(int i = 0; i < 5; i++)
    {
        v1[i] = i;
        v2[i] = i + 4;
        v3[i] = i + v1[i];
        
        cout << "Vector 1 = " << v1[i] << " - Vector 2 = " << v2[i] << " - Vector 3 = " << v3[i] << endl;
        
    }
    
    cout << "Vector 1 pos 2 = " << v1[2] << endl;
    
    
    /*LISTA_T*/
    
    
    lista_t l1;
    lista_t l2;
    
    cout << "Lista 1 de "<< MAX << " elementos insertados por el inicio " << endl;
	
	for(int i = 0;i < MAX ; i++)
	{
		l1.insertar_inicio(new node_t(i));
	}

    l1.write(std::cout);
    cout << endl;
	
	cout << "Lista 2 de  "<< MAX  << " elementos insertados por el final " << endl;
	for(int i = 0; i < MAX ; i++)
	{
		l2.insertar_final(new node_t(i));
	}



	l2.write(std::cout);
	cout << endl;
	
	/*Pila*/
	
	stack_t p1;

	for(int i = 0; i < MAX; i++)
	{ 
		
		p1.push(i);
	}

    //PILA LIFO
	cout << "Pila: " << endl;

		p1.write(cout);
		
	//COLA
	
	queue_t c1;
	
	for(int i = 0; i < MAX; i++)
	{ 
		c1.push(i);
	}

	//COLA FIFO
	cout << "Cola: " << endl;
	
		c1.write(cout);

}
    

