// ListProcessor.cpp
// Yikai Peng (edit)

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	cout << "cows list: " << cows << endl << endl;
	cout << "There are " << cows.size() << " numbers of cow in the list." << endl; //size methos- yp
	cout << "The sum of cow is " << cows.sum() << endl; 	//sum method - YP

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "horses list: " << horses << endl << endl;
	horses.insertAsLast(9.90);
	cout << "Insert the last" << endl;
	cout << "horses list: " << horses << endl;	//insert method - YP


	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	

	cout << "End of code" << endl;

	return 0;
}


