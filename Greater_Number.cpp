#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>> a >> b;
    if(a>b){ //Checks whether a is greater than b or not, and if true it prints the below statement or else, prints the statement in the else part. --> GREATER THAN OPERATOR IS USED
        cout<<"a is greater than b";
    }else{
        cout<<"b is greater than a ";
    }
    return 0;
}
/*  OUTPUT
Enter two numbers: 2 3
b is greater than a 

Enter two numbers: 7 5
a is greater than b
*/
