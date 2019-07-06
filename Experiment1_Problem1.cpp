#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	cout << "The following program calculates the total ticket sales." << endl;

	double premium, sideline, box, genad, total;
	double premiumtotal, sidelinetotal, boxtotal, genadtotal;
	
	cout << "\nTICKET PRICE\n\n" << endl;
	cout << "Type of Ticket \t Price \t\t\t\n" << endl;
	cout << "Premium \t 250.00 \t\t\t\n" << endl;
	cout << "Sideline \t 100.00 \t\t\t\n" << endl;
	cout << "Box \t\t 50.00 \t\t\t\n" << endl;
	cout << "GenAd \t\t 25.00 \t\t\t\n" << endl;
	
	cout << "\nTICKET SALES \n\n" << endl;
	cout << "Type of Ticket \t\t Price * Number of Sales\t\n";
	cout << "Premium \t\t 250.00 \t\t"; cin >> premium;
	cout << "Sideline \t\t 100.00 \t\t"; cin >> sideline;
	cout << "Box \t\t\t 50.00 \t\t\t"; cin >> box;
	cout << "GenAd \t\t\t 25.00 \t\t\t"; cin >> genad;
	
	cout << "\n\nTOTAL TICKETS SOLD" << endl;
	cout << "Premium (250.00 * "<< premium << "): \t\t" << 250*premium << endl; 
	cout << "Sideline (100.00 * "<< sideline <<"): \t" << 100*sideline << endl;
	cout << "Box (50 * "<< box << "): \t\t\t" << 50*box << endl;
	cout << "GenAd (25 * "<< genad <<"): \t\t" << 25*genad << endl;

	total = (premium*250)+(sideline*100)+(box*50)+(genad*25);
	cout << "\nThe Grand total is " << total << endl;
	
getch();
return 0;	
}