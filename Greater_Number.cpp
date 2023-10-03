#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the 3 (distinct) numbers you want to compare: ";
    cin>>a>>b>>c;
    if(a>b && a>c){ //Compares whether the value of a is greater than b and c
        cout<<a<<" is the greatest";
    }
    else if(b>c && b>a){ //Compares whether the value of b is greater than b and c
        cout<<b<<" b is the greatest"<<b;
    }
    else{ //If both the conditions fail then this statement is executed.
        cout<<c<<" is the greatest"<<c;
    }
    return 0;
}
/* OUTPUT
Enter the 3 numbers you want to compare: 8 7 6 
8 is the greatest
*/
