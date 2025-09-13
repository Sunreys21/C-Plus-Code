#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  double studyHours;
  
  cout << "Please enter your name: ";
  cin >> name;
  
  cout << "Please enter the number of study hours: ";
  cin >> studyHours;

  cout << "Hello " << name ;
  cout << "! on Saturday, you need to study " << studyHours;
  cout << " hours for the exam. " << endl;
  
  return 0;
}
