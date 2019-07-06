#include<iostream>
#include<iomanip>
#include <conio.h>

using namespace std;

int main()
{
	float mass, density, volume;
	

	cout << "\nThis program calculates the volume of an object.\n\n" << endl;

	cout << "\nEnter the mass in grams: ";
	cin >> mass;

	cout << "\nEnter the density in grams per cubic centimeters: "; 
	cin >> density;
	
	volume = (4 * density)/mass;

	cout << "\nThe volume the object is: " << volume << " cubic centimeters " <<  endl;

getch();
return 0;
}