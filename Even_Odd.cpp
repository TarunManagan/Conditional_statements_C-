#include <iostream>
using namespace std;

int main() {
   int a;
   cout<<"Enter the value a: ";
   cin>>a;

   if(a%2==0){ //Checks whether the number is even or odd as even numbers are divisible by 2 and hence the remainder will be 0
       if(a==0){//Checks whether the number is equal to 0 or not, if true then it prints Zero but if not, then it prints the statement in the else part.
           cout<<"Zero";
       }else{
           cout<<"Even number";
       }
   }else{//If the initial condition fails then this statement is executed.
           cout<<"Odd number";
       }
       return 0;
}

/*OUTPUT
Enter the value a: 86
Even number
Enter the value a: 99
Odd number
Enter the value a: 0
Zero
*/
