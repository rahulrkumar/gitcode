#include<iostream>

using namespace std;

int main()
{
	int i;
	int no;
	int first = 0;
	int second = 1;
	int next;

 	first = 0;
	second = 1;

 	cout << "Enter the number of series ";
	cin>>no;
	cout << "Fibonacci series are : \n";

	for(i = 0; i < no; i++) { 

 	  cout << "\n" << first;
	next = first + second; 
 	first = second;
	second = next;
       }  
 	
}
