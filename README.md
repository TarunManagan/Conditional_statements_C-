# Conditional_statements_C++

The conditional statements (also known as decision control structures) such as if, if else, switch, etc. are used for decision-making purposes in C/C++ programs.

They are also known as Decision-Making Statements and are used to evaluate one or more conditions and make the decision whether to execute a set of statements or not. 
These decision-making statements in programming languages decide the direction of the flow of program execution.

* Use if to specify a block of code to be executed, if a specified condition is true
* Use else to specify a block of code to be executed, if the same condition is false
* Use else if to specify a new condition to test, if the first condition is false
* Use switch to specify many alternative blocks of code to be executed

# SYNTAX: If-else

if (condition)
    // Statements to execute if
   // condition is true

else if (condition)
    statement;
.
.

else
    statement;

# SYNTAX: Switch

switch (expression) {
    case value1:
        statements;
    case value2:
        statements;
    ....
    ....
    ....
    default:
        statements;
}

# EXPERIMENT NO: 1

AIM: Find the greatest of 3 numbers
Theory: We can use if-else if statement to compare each number with each other and thereby will get the greatest number
ALGORITHM:

--> STEP 1: START
--> STEP 2: Take 3 numbers from the user
--> STEP 3: If (a>b and a> c){
                  cout<<a<<" is the greatest";
              }else if (b>a and b>c){
                  cout<<b<<" is the greatest";
              }else{
                  cout<<c<<" is the greatest";
              }
--> STEP 4: STOP

OUTPUT
/* OUTPUT
Enter the 3 numbers you want to compare: 8 7 6 
8 is the greatest
*/

# EXPERIMENT NO: 2

AIM: Check whether the number is even or odd
Theory: To check whether an integer is even or odd, the remainder is calculated when it is divided by 2 using modulus operator %.
If the remainder is zero, that integer is even if not that integer is odd.
ALGORITHM:

--> STEP 1: START
--> STEP 2: Take 2 numbers from the user
--> STEP 3: if ( n % 2 == 0)
               cout << n << " is even.";
            else
               cout << n << " is odd.";
--> STEP 4: STOP

OUTPUT
Enter the value a: 86
Even number
Enter the value a: 99
Odd number

# EXPERIMENT NO: 3

AIM: Claculator using switch case
Theory: This program takes an arithmetic operator (+, -, *, /) and two operands from a user and performs the operation on those 
two operands depending upon the operator entered by the user.
ALGORITHM:

--> STEP 1: START
--> STEP 2: Take 3 numbers from the user - one for switch case
--> STEP 3:  switch(n){
        case 1: cout << "The sum of a and b is: " << a+b <<endl; //For n=1, it prints sum of two numbers
        break;
        case 2: cout << "The difference of a and b is: " << a-b<<endl; //For n=2, it prints the difference of two numbers
        break;
        case 3: cout << "The product of a and b is: " << a*b<<endl; //For n=3, it prints the product of two numbers
        break;
        case 4: cout << "The division of a and b is: " << a/b<<endl; //For n=4, it prints the division of two numbers
        break;
    }
--> STEP 4: STOP

OUTPUT
Enter two numbers of a,b: 2 4
Enter the value n: 1
The sum of a and b is: 6

Enter two numbers of a,b: 2 4
Enter the value n: 2
The difference between a and b is: -2

Enter two numbers of a,b: 34 15
Enter the value n: 3
The product of a and b is: 510

Enter two numbers of a,b: 56 2
Enter the value n: 4
The division of a and b is: 28

# EXPERIMENT NO: 4

AIM: Calendar using switch case

ALGORITHM:

--> STEP 1: START
--> STEP 2: Take 1 input from the user for switch case
--> STEP 3: 
        case 1: cout << "Monday"; //For n=1, it prints Monday
        break;
        case 2: cout << "Tuesday"; //For n=2, it prints Tuesday
        break;
        case 3: cout << "Wednesday"; //For n=3, it prints Wednesday
        break;
        case 4: cout << "Thursday"; //For n=4, it prints Thursday
        break;
        case 5: cout << "Friday"; //For n=5, it prints Friday
        break;
        case 6: cout << "Saturday"; //For n=6, it prints Saturday
        break;
        case 7: cout << "Sunday"; //For n=7, it prints Sunday
        break;
        default: //If none of the conditions is satisfied then this gets executed
        cout<<"Wrong input";
--> STEP 4: STOP

OUTPUT
Enter the value n: 1
Monday
Enter the value n: 2
Tuesday
Enter the value n: 3
Wednesday
Enter the value n: 4
Thursday
Enter the value n: 5
Friday
Enter the value n: 6
Saturday
Enter the value n: 7
Sunday
Enter the value n: 8
Wrong input



