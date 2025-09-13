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
		if (a==10){
			a++;
			continue;
			
		}
		
		cout << "Value of a is : " << a << endl;
		a++;
	}while (a<20);	
	

	return 0;	
}