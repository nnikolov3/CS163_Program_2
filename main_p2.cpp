/* This is the main , which will communicate with the two ADT's */
/* Nikolay Nikolov
   CS 163 Fall
   Program # 2
   October 21, 2016
Instructor : Karla Fant
 */

#include"adt_queue_p2.h"
#include"adt_stack_p2.h"

using namespace std ;

const int SIZE =500 ;
int main() {

	queue myqueue; // creating an object for the queue ADT 
	stack mystack; // creating an object for the stack ADT
	data*temp = NULL ;
	char  wstop[SIZE] ;
	char  wlocation[SIZE];
	char wname[SIZE];
	char waddress[500] ;
	int wprice = 0 ;
	int wdistance = 0;
	int var=0;
	bool done =false ;
	int gas= 0;
	int rating = 0 ;


	while (!done){ // Menu is here
		cout<<"Hello!" << endl;
		cout<<"Please press 1 to add a new destination. " << endl ;
		cout<<"Please press 2 to display all upcoming  destinations. " << endl ;
		cout<<"Please press 3 to remove a stop. " << endl ;
		cout<<"Please press 4 to push a stop to the stack ."<< endl ;
		cout<<"Please press 5 to pop a stop from the stack." << endl ;
		cout<<"Please press 6 to peek a stop from the stack." <<endl ;
		cout<<"Please press 7 to quit. " << endl ;
		cin >> var ;
		cin.clear () ;
		cin.ignore (SIZE,'\n') ;

		switch(var){

			case 1: // Enqueue

				cout <<"Howdy! " << endl ;

				cout <<"Please enter the name of the stop ex.Portland :" <<endl ;
				cin.get(wstop,SIZE);
				cin.clear();
				cin.ignore(SIZE, '\n') ;

				cout <<"Please enter the location, ex.Oregon: "<< endl ;	
				cin.get(wlocation,SIZE);
				cin.clear();
				cin.ignore(SIZE, '\n') ;

				cout <<"Please enter the place you are going to lodge , ex.Travelodge :" << endl ;
				cin.get(wname,SIZE);
				cin.clear();
				cin.ignore(SIZE, '\n') ;

				cout <<"Please enter the address : " << endl ;
				cin.get(waddress,SIZE);
				cin.clear();
				cin.ignore(SIZE, '\n') ;

				cout <<"Please enter the price per night, ex. 50 : " << endl ;	
				cin >> wprice ;cin.ignore(100,'\n') ;

				cout <<"Please enter the distance from the previous stop :" << endl ;
				cin >>wdistance ;cin.ignore(100,'\n') ;

				cout <<"Alrighty lets save everything ! " << endl ;	

				if(myqueue.enqueue (wstop , wlocation, wname , waddress,  wprice ,wdistance)==1); // check if succesfully added
				cout<<"That was success!The stop is added! Well done !" << endl ;

				break ;

			case 2: // Display everything
				cout <<"Let's display everything ! " << endl ;
				myqueue.display_wrapper() ;

				break ;

			case 3: // Dequeue

				cout << "Lets remove a stop" << endl ;

				myqueue.dequeue();
				break ;

			case 4: //Push
				cout<<"Let's complete a stop! "<< endl ;
				cout<<"Please add a rating:" << endl ;
				 temp =myqueue.dequeue();
				cin>> rating ;cin.ignore(100,'\n') ; // adding the rating 
				cout<<"Please add how much you spent on gas" << endl;
				cin>>gas; cin.ignore(100,'\n'); 
				temp -> rating_n_gas(rating,gas); // adding the gas
				mystack.push(temp);

				break ;

			case 5:// Pop

				cout<<"Let's pop your last stop!" << endl ;
				mystack.pop();
				break ;

			case 6: // Peek
				cout <<"Let's see where you were last! " << endl;
				mystack.peek() ;
				break ;

			case 7: // Quit


				cout <<"Have a nice day! "<< endl ;
				done=true ;
				break;

			default :
				cout<<"To quit press 4: " << endl ;
				break;

		}

	}



	return 0 ;

}










