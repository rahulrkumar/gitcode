#include<iostream>

using namespace std;

int main()
{
  	
  		int i;
  		int num;
  		int fact = 1;

  		cout << "Enter a number ";
  		cin >> num;

  		for(i=1;i<num;i++) {

  			fact = fact * i;

  		}
  			cout << " Factorial = " << fact;
}

