#include <iostream>
#include <string>

using namespace std;

int main()
{
	//a)
	/*
	int zahl = 0;
	while (zahl < 9)
	{
		zahl += 1;
		cout << zahl << " ";
	}

	for (zahl = 0; zahl < 10; zahl++)
	{
		cout << zahl << " ";
	}

	do
	{
		zahl += 1;
		cout << zahl << " ";
	} while (zahl < 9);
	*/

	//b)

	/*
	int zahl = 1;
	while (zahl <= 16)
	{
		cout << zahl << ", ";
		zahl *= 2;
	}
	
	for (int i = 1; i <= 5; i++)
	{
		cout << zahl << ", ";
		zahl *= 2;
	}

	do
	{
		cout << zahl << ", ";
		zahl *= 2;
	} while (zahl <= 16);
	*/
	//c)

	/*
	int start;
	int ende;
	

	cout << endl << "Start: ";
	cin >> start;
	cout << endl << "Ende: ";
	cin >> ende;
	if (start == 0)
	{
		start = 1;
	}

	
	while (start <= ende)
	{

		cout << start << ", ";
		start *= 2;
	}
	



	cout << start << ", ";
	for (start; start <= ende; start *= 2)
	{
		cout << start << ", ";
	}
	


	
	do
	{
		cout << start << ", ";
		start *= 2;
	} while (start <= ende);
	*/

	//d)

	int altzahl;
	int zahl = 1;
	int diff = 1;
	int difftemp = 0;
	cout << zahl << " - " << zahl;


	while (zahl < 34)
	{
		difftemp = diff;
		
		zahl += diff;
		diff = zahl - altzahl;
		diff += difftemp;
		cout << " - " << zahl;
		 
	}
}
