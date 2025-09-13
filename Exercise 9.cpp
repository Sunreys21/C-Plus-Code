#include <iostream>
using namespace std;

int main ()
{
	double a, b, c, d, e;
	
	cout << "Enter the five test scores" << endl;
	
	cout << "Test 1 Score: ";
	cin >> a;
	
	cout<< "Test 2 Score: ";
	cin >> b;
	
	cout << "Test 3 Score: ";
	cin >> c;
	
	cout << "Test 4 Score: ";
	cin >> d;
	
	cout << "Test 5 Score: ";
	cin >> e;
	
	cout << endl;
	cout << "The average of Test 1-5 is " << (a + b + c + d + e)/ 5;
	
	return 0;
}