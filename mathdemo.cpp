#include <iostream>


using namespace std;

int main() {


       int rrk, comp, sci;

       rrk = 35;

       comp = 75;

       sci = rrk + comp; 

       if (comp > sci) {

       	 cout << "Dirty math! ";
       }
 		
 		if (rrk < sci ) {

 			cout << "good one "; 
 		}
       
     	if (rrk / comp > sci) {

     		cout << "please go home. you are drunk";
     	}
         else {

         	cout << " calculate";
         }

}