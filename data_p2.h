
/* Nikolay Nikolov
   CS 163 Fall 
Instructor:Karla Fant
Program # 2
October 21 , 2016
 */
// This the data object that will be passed 
#include<iostream>
#include<cctype>
#include<cstring> 
using namespace std ;

#ifndef DATA
#define DATA

class data 
{
	private :
		char * stop ;
		char * location;
		char * name ;
		char * address ;
		int price ;
		int distance ;
		int rating ;
		int   gas ;
	public :
		int display () ;
		int display_all() ;
		int rating_n_gas(int in_rating, int in_gas) ;
		data() ;
		data (char * stop , char * location, char * name , char * address , int price , int distance );
		~data () ;

};


#endif 



