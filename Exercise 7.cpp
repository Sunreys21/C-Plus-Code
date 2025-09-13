#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double x;
	
	cout<<"Please enter a decimal number: ";
	cin>> x;
	
	cout<<"The number rounded to the nearest integer is ";
    cout << setprecision(0) << x << endl;

	return 0;
}