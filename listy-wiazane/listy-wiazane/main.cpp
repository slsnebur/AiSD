// listy-wiazane.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "node.h"
#include <time.h>
#include <windows.h>
#include <stdlib.h> 

using namespace std;


int main()
{
	srand(time(NULL));
	node* H = NULL;

	cout << "Lista: ";
	cout << endl << endl;

	for (int i = 0; i < 1500; i++)
	{
		add(H, rand() % 10);
	}


	show(H);
	cout << endl << endl << "Lista po:";
	quickSort(H);
	cout << endl << endl;
	show(H);

	cout << endl << endl;
	system("pause");
	return 0;
}