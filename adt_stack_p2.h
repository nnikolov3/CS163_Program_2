/* Nikolay Nikolov
   CS 163 Fall
   October 21, 2016
Instructor:Karla Fant
Program :# 2 
Purpose of the program 
The objective of the program is to assist the user with the process of planning and experiencing a road trip across the country . For the task the program utilizes two ADT's .

This is the header file for the Stack ADT , which is repsonsible for operating the  functions to control the places  where the user has already visisted  .The Stack ADT is using a Linear Linked List structure with an array storing name of the stop, location, information about the lodge,number of miles, rating and gas spent . 

 */

#include<iostream>
#include<cctype>
#include<cstring> 
#include<fstream>
#include"data_p2.h" 

using namespace std ;

struct s_node
{
	data *  info;// a dynamically allocated array of entries
	s_node * next ;
};

const int MAX = 3 ;
class stack
{
	public:
		stack();
		~stack() ;
		int display_all() ;
		int push(data*cat) ; 
		int pop ();
		int peek () ;
	private:
		s_node*head ;
		int top_index ; //The index for the next place to push
};



