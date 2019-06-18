
/* Nikolay Nikolov
   CS 163 Fall
Instructor:Karla Fant
Program # 2
October 21, 2016
Purpose of the program: 

The objective of the program is to assist the user with the process of planning and experiencing a road trip across the country . For the task the program utilizes two ADT's. 

This is the header file for the Queue ADT, which is responsible for operating  the places where the user is GOING to visit . For each stop in the Queue , using Circular Linked Lists , vis stored the name of the next stop, location, information about the place where the user is going to lodge, and number of miles from the previous stop. 

 */

#include<iostream>
#include<cctype>
#include<cstring> 
#include"data_p2.h"
using namespace std ;


struct q_node // the queue node
{
	q_node();
	q_node(char * stop, char * location, char * name , char * address , int price, int distance) ;
	q_node* next;
	data* info;

};

class 	queue 
{
	public :
		queue() ; // constructor for the queue class 
		~queue() ;// destructor for the queue class
		int display_wrapper();
		int enqueue( char * stop, char * location , char * name ,char * address , int price , int distance) ;	// Add to the queue
		data* dequeue ();	// Remove from the queue 
		int isempty ; 	// Determines if the queue is empty
	private :
		q_node * rear ;

		int display(q_node*last);// the display function 
};


