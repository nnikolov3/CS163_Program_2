/* Nikolay Nikolov
   CS 163 Fall
   Program # 2
   October 21, 2016
   Purpose of the Program : 

   The objective of the program is to assist the user with the process of planning and experiencing a road trip across the country. For the task the program utilizes two ADT's . 

   This is the .cpp file for t`he Queue ADT . Here is the engine of the header file where all the functions live. 

 */ 

#include"adt_queue_p2.h" 

using namespace std ;
q_node :: q_node ()  // constructor for the node
{
	next = NULL ;
	info = NULL ;
}


q_node :: q_node(char *stop, char * location, char * name , char * address , int price, int distance) // second constructor to initialize the values
{
	info = new data ( stop, location, name , address,price, distance )  ;
	next = NULL ;
}


// ---------------------------------q_node 

//__________________________________class queue starts here 

queue :: queue() // constructor
{
	rear = NULL ;
}

queue :: ~queue () // destructor
{}

int queue :: enqueue (char *stop, char * location, char * name , char * address , int price, int distance)  // enqueue
{
	q_node * temp = NULL ; 
	if (! rear) // if there is nothing in the list we add 
	{
		rear = new q_node (stop , location , name, address, price, distance);
		rear->next = rear;
		return    1;
	}
	if (rear == rear -> next ) // if the is one item on the list
	{
		q_node * temp = new q_node (stop , location, name , address, price , distance ) ;
		rear -> next = temp ;
		temp -> next = rear ;
		rear = temp ;

		return 	1 ;
	}else // add to the list  
	{
		q_node * head = rear -> next ;
		q_node * temp =new q_node (stop , location , name, address, price, distance ) ;
		rear -> next	= temp;
		temp -> next	= head;
		rear = temp ;

		return 1;
	}
}
data*queue :: dequeue () // dequeue and catch the value
{
	if (!rear) 			// case 1 if the list is empty
		return NULL ;
	if ( rear == rear-> next )	 // case 2 if there is 1 item
	{
		data * temp = rear -> info ;
		delete rear ;
		rear = NULL ;

		return temp;
	}
	// case 3 more than 1 item delete from the front 
	q_node * temp ; 		// hold onto front 
	data  * temp2 = rear ->info ;
	temp  = rear -> next-> next ;
	delete rear -> next; 		// delete 
	rear -> next = temp ;
	temp = NULL;
	return temp2 ;

}
int queue :: display_wrapper() // a wrapper for the display function
{
	if (! rear)
		return 0 ;
	// I want to display rear and return 	
	display(rear->next) ;
}
int queue :: display(q_node*last) // the display function
{
	if(!last)
		return 0;
	last -> info ->display () ; // passing the data objects 
	if (last == rear)
	{
		return 1 ;
	}
	return display(last -> next) ;
}







// end of queue_class stuff

