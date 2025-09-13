#include <iostream>
#include <string>
#include <limits>


using namespace std;

int main()
{
	const int password = 1234;
	int attempts = 3;
	int balance = 10000;
	int BPIbalance = 5000;
	int choice, simChoice;
	int amount, PIN;
	long long int number;
	string Name, Surname;

	
		cout << "----- Welcome to the GCASH APP -----" << endl << endl;
		
		while (attempts > 0){
			cout << "Please enter your PIN: ";
			cin >> PIN;
			
			if (password == PIN){
				break;
			}else{
				attempts --;
				
				if (attempts > 0){
					cout << endl;
					cout << "Wrong PIN. You have " << attempts << " attempts left" << endl;
					}else{
						cout << endl;
						cout << "You have been exited from the GCASH APP." << endl;
					}
				}
			}
		
	if (password == PIN){ 
		do{
			cout << endl << endl;
			cout << "Welcome Jumier Rey" << endl;
			cout << "Your currect balance is: " << balance << endl<< endl;
			cout << "MENU: ";
			cout << "\t[1] Cash in" << endl;
			cout << "\t[2] Send Cash" << endl
				 << "\t[3] Load" << endl
				 << "\t[4] Transfer" << endl
				 << "\t[5] Bills" << endl 
				 << "\t[0]Exit"<< endl;
					 
			cout << endl;
			cout << "What would you like to do? ";
			cin >> choice;
			cout << endl << endl;
			
				if (choice == 1){
					
					cout << "Youve chosen to CASH IN" << endl
						 << "Cash Amount: ";
					cin >> amount;
					
					if (amount > balance) {
					cout << endl;
			        cout << "Insufficient balance to make this transaction." << endl;
			    	} else {
			    	BPIbalance -=amount;
			        balance += amount;
			        
			        cout << endl;
			        cout << "New BPI balance: " << BPIbalance <<endl;
			        cout << "New Gcash balance: " << balance << endl << endl;
			    }
			}
				
				//SEND CASH
				else if (choice == 2){
					
					cout << "Youve chosen to SEND CASH" << endl
						 << "Cash Amount: ";
					cin >> amount;
					cout << "Gcash Number: ";
					cin >> number;
					
					if (amount > balance) {
					cout << endl;
			        cout << "Insufficient balance to make this transaction." << endl;
			    	} else {
			        balance -= amount;
			        cout << endl;
			        cout << "You've sent " << amount << "Php to 0" << number << endl;
			        cout << "Your updated balance is " << balance << endl << endl;
			   }
			}
				//LOAD 
				else if (choice == 3){
					cout << "[1] TM/GLOBE" << endl;
					cout << "[2] SMART" << endl;
					cout << "[3] TALK N TEXT" << endl;
					cout << "[4] DITO" << endl;
					cout << "[5] GOMO" << endl << endl;
					
					cout << "Sim network:";
					cin >> simChoice;
			
					cout << endl << "Amount: ";
					cin >> amount;
					cout << "Mobile Number: ";
					cin >> number;
					
					if (amount > balance) {
						cout << endl;
			        	cout << "Insufficient balance to make this transaction." << endl;
			    	} else {
			        	balance -= amount;
			        	cout << endl;
			        	cout << "You've sent " << amount << " to 0" << number << endl;
			        	cout << "Your updated balance is " << balance << endl << endl;
			    }
			}
				else if (choice == 4){
					
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Transfer Money to another bank account: " << endl
						 << "Account name: ";
					getline(cin, Name);
					cout << "Account number: ";
					cin >> number;
					cout << "Amount: ";
					cin >> amount;
					
					if (amount > balance) {
					cout << endl;
			        cout << "Insufficient balance to make this transaction." << endl;
			    	} else {
			        balance -= amount;
			        cout << endl;
			        cout << "You've sent " << amount << "Php to "<< Name << ", Account no: " << number << endl;
			        cout << "Your updated balance is " << balance << endl << endl;
			    }
			}
				else if (choice == 5){
					
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Pay your bills LASURECO Bill " << endl
						 << "Account name: ";
					getline(cin, Name);
					cout << "Account Number: ";
					cin >> number;
					
					if (number >= 1000000000 && number <= 9999999999){
						cout << "Amount: ";
						cin >> amount;
						if (amount > balance) {
							cout << endl;
			        		cout << "Insufficient balance to make this transaction." << endl;
			    		} else {
			        		balance -= amount;
			        		cout << endl;
			        		cout << "You've payed " << amount << "Php to "<< Name << "\'s LASURECO Account #" << number << endl;
			        		cout << "Your updated balance is " << balance << endl << endl;
			  	  		}
				}else{
					cout << endl;
					cout << "ERROR: Account number consists of 10 digits." << endl;
				}
			}
					

				// EXIT
				else if (choice == 0){
					cout << "Thank you for using the application.";
					
				//THE CHOICE IS NOT IN THE MENU
				}else {
					cout << "Invalid Choice, choose again." << endl;
				}
			
			
		}while (choice != 0);
	}
	
	return 0;
}