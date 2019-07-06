#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	float netbalance, payment, d1, d2, average, rate, interest;
	cout << fixed << showpoint << setprecision(3);

	cout << "\nEnter the net balance: ";
	cin >> netbalance;

	cout << "\nEnter payment: ";
	cin >> payment;

	cout << "\nEnter the number of days in the billing cycle: ";
	cin >> d1;

	cout << "\nEnter the number of days payment is made before the billing cycle: ";
	cin >> d2;

	average = (netbalance * d1 - payment * d2) / d1;

	cout << "\nEnter the monthly interest rate: ";
	cin >> rate;

	interest = (average * rate);

	cout << "\nThe average daily balance is: " << average << endl;
	cout << "\nThe interest on the unpaid balance is: " << interest << endl;

getch ();
return 0;
}