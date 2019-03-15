/* Roxanne Tait
07 FEB 2012 */


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{

	string month; double total, county_tax, state_tax, total_tax, total_with_taxes; 

	//set money limit to 2 decimals
	cout << setprecision(2) << fixed;

	//user info
	cout << "Enter Month: " << endl;
	cout << month ;
	cin >> month ;
	cout << "Enter Total Monthly Sales: " << endl;
	cin >> total ;

	//calculate state tax:
	state_tax = total * .04;

	//calculate county tax:
	county_tax = total * .02;

	//calculate total tax:
	total_with_taxes = total/1.06;

	//total taxes:
	total_tax = county_tax + state_tax;

	//display
	cout << "For the Month of " << month <<endl;
	cout << "Total Collected without Taxes: " << total << endl;
	cout << "Total Sales with Taxes: " << total_with_taxes << endl;
	cout << "County Taxes: " << county_tax << endl;
	cout << "State Taxes: " << state_tax << endl;
	cout << "Total Tax: " << total_with_taxes << endl;

	return 0;

}