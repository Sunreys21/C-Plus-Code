#include <iostream>
#include <string>
using namespace std;

int main()
{
	int SECRET = 11;
	double RATE = 12.50	;
	
	int num1, num2, newNum;
	
	string name;
	
	double hoursWorkedd;
	double wages;
	
	cout << "Please input the first number: ";
	cin >> num1;
	
	cout << "Please input the 2nd number: ";
	cin >> num2;
	
	cout << endl;
	cout << "The value of num1 is " <<num1 << endl;
	cout << "The value of num2 is "<< num2 << endl << endl;
	
	newNum = num1*num2+num2;
	cout << "The Value of the newNUM is " << newNum << endl;
	
	newNum = newNum+SECRET;
	cout << "The updated value of newNum is " << newNum << endl<< endl;
	
	cout << "Please enter your last name: ";
	cin >> name;
	
	do{
		cout << "Please enter the number of hours worked (0-70): ";
	    cin >> hoursWorkedd;
	    if (hoursWorkedd<0 || hoursWorkedd>70){
	    	cout << "Invalid value, please enter values between 0 and 70."<< endl << endl;
			cout << "--------------------"<< endl;
		}
	}while (hoursWorkedd<0 || hoursWorkedd>70);
	
	
	wages = RATE * hoursWorkedd;
	cout << endl;
	cout << "Name: " << name << endl;
    cout << "Pay Rate: $" << RATE << endl;
	cout << "Hours Worked :"  << hoursWorkedd<< endl;
	cout << "Salary: $" << wages << endl;
	
	return 0;
}
