/* Nikolay Nikolov
   CS 163 Fall 
Instructor:Karla Fant
Program # 2
October 21 , 2016

This the .cpp file that accompanies the class for the data , which will be gathered and passed to the two ADT's . 

 */

#include"data_p2.h"


data :: data () // constructor for the data class 
{}
data :: data (char * in_stop , char * in_location, char * in_name , char * in_address , int in_price , int in_distance ) // second constructor to get the data from the user
{	
	if (stop){		// initiallizing  and copying 
		delete [] stop ;
		stop = NULL ;
	}
	stop = new char [strlen(in_stop)+1];
	strcpy (stop , in_stop) ;
	if (location){
		delete [] location ;	
		location = NULL ;
	}
	location = new char  [strlen(in_location)+1] ;
	strcpy (location , in_location) ;


	if (name){
		delete [] name ;	
		name  = NULL ;
	}
	name 	 = new char  [strlen(in_name)+1] ;
	strcpy (name , in_name) ;

	if (address){
		delete [] address ;	
		address = NULL;
	}
	address = new char  [strlen(in_address)+1] ;
	strcpy (address, in_address) ;

	price = in_price ;
	distance = in_distance  ;
	rating  = 0;
	gas 	= 0;

}
data :: ~data () // destructor 
{
	if (stop){
		delete [] stop ;
		stop = NULL ;
	}

	if (location){
		delete [] location ;
		location = NULL ;
	}

	if (name){
		delete [] name ;
		name  = NULL ;
	}
	if ( address){
		delete [] address ;
		address = NULL ;
	}
	price = 0;
	distance = 0;
	rating = 0; 
	gas = 0; 
}

int data :: display ()
{
	cout <<"\nThe stop is \n" << stop << "\nThe location is \n" << location <<"\n The name is \n" << name << "\nThe address is\n " << address<<"\nThe price is \n" << price <<"\nThe distance is \n" << distance << endl ;

}
int data :: display_all()
{
	cout <<"\nThe stop is \n" << stop << "\nThe location is \n" << location <<"\n The name is \n" << name << "\nThe address is\n " << address<<"\nThe price is \n" << price <<"\nThe distance is \n" << distance << "\nThe rating is \n" << rating << "\nThe gas is \n" << gas << endl ;

}


int data :: rating_n_gas(int in_rating ,int in_gas)
{
	rating = in_rating ;
	gas   = in_gas ;

}

