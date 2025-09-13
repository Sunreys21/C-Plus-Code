#include <iostream>

using namespace std;

int main ()
{
	cout<< "    **********************************" << endl; 
	cout<< "    *      Programming Exercise      *" << endl;
	cout<< "    *     Computer Programming I     *" << endl;
	cout<< "    * Author: Jumier Rey U. Cabanero *" << endl;
	cout<< "    *    Due Date: Monday, Oct. 16   *" << endl;
	cout<< "    **********************************" << endl << endl;
	
	int a = 1;
	
	do{
		cout << "Value of a : " << a << endl;
		a++;
		
		if(a>10){
		
			break;
			cout << "Breaking the loop" << endl;
		}
	}while (a<20);
	
	cout << "hello";
	

	return 0;	
}