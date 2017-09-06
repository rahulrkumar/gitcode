  #include <iostream>

 using namespace std;

          int main()
          {
           
           int number,count=0;
            cout<<"Please enter the number to check whether it's prime or not. ";
            cin >> number;
             for(int a=1;a<=number;a++)
                 {
                  if(number%a==0)
                     {
                    count++;
                     }
                 }
         if(count==2)
           {
            cout<<" PRIME NUMBER \n";
           }
         else
           {
            cout<<" NOT A PRIME NUMBER \n";
           }
         
         }