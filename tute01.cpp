
/*Exercise 1 - Calculations

Convert the C program given below which converts a length given in cm to inches to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.

e.g.

float data1;
int data2;
scanf("%f", &data1); --> std::cin >> data1;
scanf("%d", &data2); --> std::cin >> data2; 
You already know that printf() in C is std::cout in C++ e.g.

printf("Hello World") --> std::cout << "Hello World";
2.54cm = 1 inch
*/


#include <iostream>
#include<iomanip>
using namespace std;
int main() 
{
    float cm, inches;
    cout<<("Enter a length in cm : "); //taking inputs from the user
    cin>>cm;
    inches = cm / 2.54; //formula used for conversion
    cout<<"The length in inches would be:"<<setiosflags(ios::fixed)<<setprecision(2)<<inches; //printing values to 2 decimal places.
    return 0;
}  
