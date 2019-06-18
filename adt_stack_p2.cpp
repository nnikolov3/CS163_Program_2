/* Nikolay Nikolov
   CS 163 Fall
   October 21 , 2016
   Purpose of the program 
   The objective of the program is to assist the user with the process of planning and experiencing a road trip across the country. For the task the program utilizes two ADT's . 

   This is the .cpp file for the Stack ADT, where all the functions for the header file live in. 

 */
#include"adt_stack_p2.h" 

using namespace std ;

stack::stack()//constructor
{
	top_index= 0;
	head = NULL ;
}

stack::~stack() // destructor
{

}
int stack :: push (data * cat) // the fuction to push 
{
	if(! head) // case 1 if there is an empty list
	{
		head = new s_node ;
		head -> info = new data [3] ;
		head -> info [top_index] =* cat ;
		++top_index ;
		return 1 ;

	}

	if ( top_index == MAX){ // case 2 if the top_index is 3
		cout << "stack is full " << endl ;
		s_node * temp = new s_node;		
		top_index = 0 ;
		temp -> next = head ;
		temp -> info = new data [3] ;
		head -> info [top_index] = *cat ;
		++top_index ;

		head = temp ;
		return 1;
	}
	else//head top_index) // needs to be fixed
	{
		head -> info [top_index] = *cat ;
		++top_index ;
	} 

}

int stack :: pop () // the fucntion that pops 
{
	s_node * hold = head -> next; 
	if (!top_index) 
	{
		if( head ->info )
			delete [] head -> info;
		delete head ;	
		head = hold;
		top_index = MAX ;

		return 1 ;
	}

}
int stack :: peek () // the function that peeks
{
	if(!head) // case 1 if there is no head ;
	return 0;
	head ->info [top_index-1]. display_all () ;

	return 1;
}





















